`include "Sysbus.defs"

module top
#(
  ID_WIDTH = 13,
  ADDR_WIDTH = 64,
  DATA_WIDTH = 64,
  STRB_WIDTH = DATA_WIDTH/8
)
(
  input  clk,
         reset,
         hz32768timer,

  // 64-bit addresses of the program entry point and initial stack pointer
  input  [63:0] entry,
  input  [63:0] stackptr,
  input  [63:0] satp,

  // interface to connect to the bus
  output  wire [ID_WIDTH-1:0]    m_axi_awid,
  // aw: write address
  output  wire [ADDR_WIDTH-1:0]  m_axi_awaddr,
  output  wire [7:0]             m_axi_awlen,
  output  wire [2:0]             m_axi_awsize,
  output  wire [1:0]             m_axi_awburst,
  output  wire                   m_axi_awlock,
  output  wire [3:0]             m_axi_awcache,
  output  wire [2:0]             m_axi_awprot,
  output  wire                   m_axi_awvalid,
  input   wire                   m_axi_awready,
  // w: write data
  output  wire [DATA_WIDTH-1:0]  m_axi_wdata,
  output  wire [STRB_WIDTH-1:0]  m_axi_wstrb,
  output  wire                   m_axi_wlast,
  output  wire                   m_axi_wvalid,
  input   wire                   m_axi_wready,
  // b: write response(signal)
  input   wire [ID_WIDTH-1:0]    m_axi_bid,
  input   wire [1:0]             m_axi_bresp,
  input   wire                   m_axi_bvalid,
  output  wire                   m_axi_bready,
  // ar: read address
  output  wire [ID_WIDTH-1:0]    m_axi_arid,
  output  wire [ADDR_WIDTH-1:0]  m_axi_araddr,
  output  wire [7:0]             m_axi_arlen,
  output  wire [2:0]             m_axi_arsize,
  output  wire [1:0]             m_axi_arburst,
  output  wire                   m_axi_arlock,
  output  wire [3:0]             m_axi_arcache,
  output  wire [2:0]             m_axi_arprot,
  output  wire                   m_axi_arvalid,
  input   wire                   m_axi_arready,
  // r: read data
  input   wire [ID_WIDTH-1:0]    m_axi_rid,
  input   wire [DATA_WIDTH-1:0]  m_axi_rdata,
  input   wire [1:0]             m_axi_rresp,
  input   wire                   m_axi_rlast,
  input   wire                   m_axi_rvalid,
  output  wire                   m_axi_rready,

  input   wire                   m_axi_acvalid,
  output  wire                   m_axi_acready,
  input   wire [ADDR_WIDTH-1:0]  m_axi_acaddr,
  input   wire [3:0]             m_axi_acsnoop
);

  logic [63:0] pc;
  logic receive_ready;
  logic receive_processing;
  logic [31:0] instruction_high;
  logic [31:0] instruction_low;

  logic [63:0] registers [0:31];
  logic [63:0] registers_temp [0:31];

  logic [4:0] temp5;
  logic [11:0] temp12;
  logic [19:0] temp20;
  logic [63:0] temp64;
  logic [63:0] temp_result;

  logic [63:0] result;
  logic [4:0] rd;
  logic write_enable;

  integer count;

  task display_reg_name(input [4:0] reg_num);
  begin
      case (reg_num)
          5'b00000: $write("zero");  // x0
          5'b00001: $write("ra");    // x1 (Return Address)
          5'b00010: $write("sp");    // x2 (Stack Pointer)
          5'b00011: $write("gp");    // x3 (Global Pointer)
          5'b00100: $write("tp");    // x4 (Thread Pointer)
          5'b00101: $write("t0");    // x5 (Temporary Register 0)
          5'b00110: $write("t1");    // x6 (Temporary Register 1)
          5'b00111: $write("t2");    // x7 (Temporary Register 2)
          5'b01000: $write("s0");    // x8 (Saved Register 0 / Frame Pointer)
          5'b01001: $write("s1");    // x9 (Saved Register 1)
          5'b01010: $write("a0");   // x10 (Function Argument / Return Value 0)
          5'b01011: $write("a1");   // x11 (Function Argument / Return Value 1)
          5'b01100: $write("a2");   // x12 (Function Argument 2)
          5'b01101: $write("a3");   // x13 (Function Argument 3)
          5'b01110: $write("a4");   // x14 (Function Argument 4)
          5'b01111: $write("a5");   // x15 (Function Argument 5)
          5'b10000: $write("a6");   // x16 (Function Argument 6)
          5'b10001: $write("a7");   // x17 (Function Argument 7)
          5'b10010: $write("s2");   // x18 (Saved Register 2)
          5'b10011: $write("s3");   // x19 (Saved Register 3)
          5'b10100: $write("s4");   // x20 (Saved Register 4)
          5'b10101: $write("s5");   // x21 (Saved Register 5)
          5'b10110: $write("s6");   // x22 (Saved Register 6)
          5'b10111: $write("s7");   // x23 (Saved Register 7)
          5'b11000: $write("s8");   // x24 (Saved Register 8)
          5'b11001: $write("s9");   // x25 (Saved Register 9)
          5'b11010: $write("s10");  // x26 (Saved Register 10)
          5'b11011: $write("s11");  // x27 (Saved Register 11)
          5'b11100: $write("t3");   // x28 (Temporary Register 3)
          5'b11101: $write("t4");   // x29 (Temporary Register 4)
          5'b11110: $write("t5");   // x30 (Temporary Register 5)
          5'b11111: $write("t6");   // x31 (Temporary Register 6)
          default: $write("unknown ");     // Unknown register
      endcase
  end
  endtask

  task decode_instruction;
    input [31:0] instruction;
    input [63:0] pc;
    input logic [63:0] registers_temp [0:31];
    output logic [63:0] result;
    output logic [4:0] rd;
    output logic write_enable;
    begin
      $display("Display: %x", instruction);
      write_enable = 0;
      result = 64'b0;
      rd = 5'b0;

      if (instruction == 32'b0) begin
        //$display("Terminating.");
        $finish;
      end else begin
        case (instruction[6:0])
          //7'b0010011: $display("add %d", instruction[11:7]);
          7'b0000011: begin
            case (instruction[14:12])
              3'b000: $display("%x: LB r%0d", pc, instruction[11:7]);
              3'b001: $display("%x: LH r%0d", pc, instruction[11:7]);
              3'b010: $display("%x: LW r%0d", pc, instruction[11:7]);
              3'b100: $display("%x: LBU r%0d", pc, instruction[11:7]);
              3'b101: $display("%x: LHU r%0d", pc, instruction[11:7]);
              3'b110: $display("%x: LWU r%0d", pc, instruction[11:7]);
              3'b011: $display("%x: LD r%0d", pc, instruction[11:7]);
            endcase
            write_enable = 0;
          end
          7'b0010011: begin
            case (instruction[14:12])
              3'b000: begin
                // [31:20] imm [19:15] rs1 [11:7] rd
                // rd = rs1 + imm
                $display("%x: ADDI r%0d", pc, instruction[11:7]);
                temp12 = instruction[31:20];
                temp64 = {{52{instruction[31]}}, temp12};
                result = registers_temp[instruction[19:15]] + temp64;
                rd = instruction[11:7];
                write_enable = 1;
              end
              3'b010: begin
                // [31:20] imm [19:15] rs1 [11:7] rd
                // if (rs1 < imm) then rd = 1 else rd = 0
                $display("%x: SLTI r%0d", pc, instruction[11:7]);
                temp12 = instruction[31:20];
                temp64 = {{52{instruction[31]}}, temp12};

                if ($signed(registers_temp[instruction[19:15]]) < $signed(temp64)) begin
                  result = 64'b1;
                end else begin
                  result = 64'b0;
                end
                rd = instruction[11:7];
                write_enable = 1;
              end
              3'b011: begin
                // [31:20] imm [19:15] rs1 [11:7] rd
                // if (rs1 < imm (unsigned)) then rd = 1 else rd = 0
                $display("%x: SLTIU r%0d", pc, instruction[11:7]);
                temp12 = instruction[31:20];
                temp64 = {{52{instruction[31]}}, temp12};

                if ($unsigned(registers_temp[instruction[19:15]]) < $unsigned(temp64)) begin
                  result = 64'b1;
                end else begin
                  result = 64'b0;
                end
                rd = instruction[11:7];
                write_enable = 1;
              end
              3'b100: begin
                // [31:20] imm [19:15] rs1 [11:7] rd
                // rd = rs1 ^ imm
                $display("%x: XORI r%0d", pc, instruction[11:7]);
                temp12 = instruction[31:20];
                temp64 = {{52{instruction[31]}}, temp12};

                result = registers_temp[instruction[19:15]] ^ temp64;
                rd = instruction[11:7];
                write_enable = 1;
              end
              3'b110: begin
                // [31:20] imm [19:15] rs1 [11:7] rd
                // rd = rs1 | imm
                $display("%x: ORI r%0d", pc, instruction[11:7]);
                temp12 = instruction[31:20];
                temp64 = {{52{instruction[31]}}, temp12};

                result = registers_temp[instruction[19:15]] | temp64;
                rd = instruction[11:7];
                write_enable = 1;
              end
              3'b111: begin
                // [31:20] imm [19:15] rs1 [11:7] rd
                // rd = rs1 & imm
                $display("%x: ANDI r%0d", pc, instruction[11:7]);
                temp12 = instruction[31:20];
                temp64 = {{52{instruction[31]}}, temp12};

                result = registers_temp[instruction[19:15]] & temp64;
                rd = instruction[11:7];
                write_enable = 1;
              end
              3'b001: begin
                // [24:20] shamt [19:15] rs1 [11:7] rd
                // rd = rs1 << shamt (logical shift)
                $display("%x: SLLI r%0d", pc, instruction[11:7]);
                temp5 = instruction[24:20];

                result = registers_temp[instruction[19:15]] << temp5;
                rd = instruction[11:7];
                write_enable = 1;
              end
              3'b101: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [24:20] shamt [19:15] rs1 [11:7] rd
                  // rd = rs1 >> shamt (logical shift)
                  $display("%x: SRLI r%0d", pc, instruction[11:7]);
                  temp5 = instruction[24:20];

                  result = registers_temp[instruction[19:15]] >> temp5;
                  rd = instruction[11:7];
                  write_enable = 1;
                end else if (instruction[31:25] == 7'b0100000) begin
                  // [24:20] shamt [19:15] rs1 [11:7] rd
                  // rd = rs1 >>> shamt (arithmetic shift)
                  $display("%x: SRAI r%0d", pc, instruction[11:7]);
                  temp5 = instruction[24:20];

                  result = $signed(registers_temp[instruction[19:15]]) >>> temp5;
                  rd = instruction[11:7];
                  write_enable = 1;
                end
              end
            endcase
          end
          7'b0010111: begin
            // [31:12] imm [11:7] rd
            // rd = pc + (imm << 12)
            $display("%x: AUIPC r%0d", pc, instruction[11:7]);
            temp20 = instruction[31:12];
            temp64 = {temp20, 12'b0};

            result = pc + temp64;
            rd = instruction[11:7];
            write_enable = 1;
          end
          7'b0011011: begin
            case (instruction[14:12])
              3'b000: begin
                // [31:20] imm [19:15] rs1 [11:7] rd
                // rd = (rs1 + imm)[31:0]
                $display("%x: ADDIW r%0d", pc, instruction[11:7]);
                temp12 = instruction[31:20];
                temp64 = {{52{instruction[31]}}, temp12};
                temp_result = registers_temp[instruction[19:15]] + temp64;

                result = $signed(temp_result[31:0]);
                rd = instruction[11:7];
                write_enable = 1;
              end
              3'b001: begin
                // [24:20] shamt [19:15] rs1 [11:7] rd
                // rd = (rs1 << shamt)[31:0]
                $display("%x: SLLIW r%0d", pc, instruction[11:7]);
                temp5 = instruction[24:20];
                temp_result = registers_temp[instruction[19:15]] << temp5;

                result = $signed(temp_result[31:0]);
                rd = instruction[11:7];
                write_enable = 1;
              end
              3'b101: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [24:20] shamt [19:15] rs1 [11:7] rd
                  // rd = (rs1 >> shamt)[31:0] (logical shift)
                  $display("%x: SRLIW r%0d", pc, instruction[11:7]);
                  temp5 = instruction[24:20];
                  temp_result = $unsigned(registers_temp[instruction[19:15]]) >> temp5;

                  result = $signed(temp_result[31:0]);
                  rd = instruction[11:7];
                  write_enable = 1;
                end else if (instruction[31:25] == 7'b0100000) begin
                  // [24:20] shamt [19:15] rs1 [11:7] rd
                  // rd = (rs1 >>> shamt)[31:0] (arithmetic shift)
                  $display("%x: SRAIW r%0d", pc, instruction[11:7]);
                  temp5 = instruction[24:20];
                  temp_result = $signed(registers_temp[instruction[19:15]]) >>> temp5;

                  result = $signed(temp_result[31:0]);
                  rd = instruction[11:7];
                  write_enable = 1;
                end
              end
            endcase
          end
          7'b0110011: begin
            case (instruction[14:12])
              3'b000: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 + rs2
                  $display("%x: ADD r%0d", pc, instruction[11:7]);

                  result = registers_temp[instruction[19:15]] + registers_temp[instruction[24:20]];
                  rd = instruction[11:7];
                  write_enable = 1;
                end else if (instruction[31:25] == 7'b0100000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 - rs2
                  $display("%x: SUB r%0d", pc, instruction[11:7]);

                  result = registers_temp[instruction[19:15]] - registers_temp[instruction[24:20]];
                  rd = instruction[11:7];
                  write_enable = 1;
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 * rs2
                  $display("%x: MUL r%0d", pc, instruction[11:7]);

                  result = registers_temp[instruction[19:15]] * registers_temp[instruction[24:20]];
                  rd = instruction[11:7];
                  write_enable = 1;
                end
              end
              3'b001: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 << rs2 (logical shift)
                  $display("%x: SLL r%0d", pc, instruction[11:7]);

                  result = registers_temp[instruction[19:15]] << registers_temp[instruction[24:20]][5:0];
                  rd = instruction[11:7];
                  write_enable = 1;
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 * rs2 (the upper 64 bits)
                  $display("%x: MULH r%0d", pc, instruction[11:7]);

                  result = ($signed(registers_temp[instruction[19:15]]) * $signed(registers_temp[instruction[24:20]])) >> 64;
                  rd = instruction[11:7];
                  write_enable = 1;
                end
              end
              3'b010: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // if (rs1 < rs2) then rd = 1 else rd = 0
                  $display("%x: SLT r%0d", pc, instruction[11:7]);

                  if ($signed(registers_temp[instruction[19:15]]) < $signed(registers_temp[instruction[24:20]])) begin
                    result = 64'b1;
                  end else begin
                    result = 64'b0;
                  end
                  rd = instruction[11:7];
                  write_enable = 1;
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 * (unsigned) rs2 (the upper 64 bits)
                  $display("%x: MULHSU r%0d", pc, instruction[11:7]);

                  result = ($signed(registers_temp[instruction[19:15]]) * $unsigned(registers_temp[instruction[24:20]])) >> 64;
                  rd = instruction[11:7];
                  write_enable = 1;
                end
              end
              3'b011: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // if ((unsigned)rs1 < (unsigned)rs2) then rd = 1 else rd = 0
                  $display("%x: SLTU r%0d", pc, instruction[11:7]);

                  if ($unsigned(registers_temp[instruction[19:15]]) < $unsigned(registers_temp[instruction[24:20]])) begin
                    result = 64'b1;
                  end else begin
                    result = 64'b0;
                  end
                  rd = instruction[11:7];
                  write_enable = 1;
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = (unsigned) rs1 * (unsigned) rs2 (the upper 64 bits)
                  $display("%x: MULHU r%0d", pc, instruction[11:7]);

                  result = ($unsigned(registers_temp[instruction[19:15]]) * $unsigned(registers_temp[instruction[24:20]])) >> 64;
                  rd = instruction[11:7];
                  write_enable = 1;
                end
              end
              3'b100: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 ^ rs2
                  $display("%x: XOR r%0d", pc, instruction[11:7]);

                  result = registers_temp[instruction[19:15]] ^ registers_temp[instruction[24:20]];
                  rd = instruction[11:7];
                  write_enable = 1;
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 / rs2
                  $display("%x: DIV r%0d", pc, instruction[11:7]);

                  if (registers_temp[instruction[24:20]] != 0) begin
                    result = $signed(registers_temp[instruction[19:15]]) / $signed(registers_temp[instruction[24:20]]);
                  end else begin
                    result = -1;
                  end
                  rd = instruction[11:7];
                  write_enable = 1;
                end
              end
              3'b101: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 >> rs2 (logical shift)
                  $display("%x: SRL r%0d", pc, instruction[11:7]);

                  result = registers_temp[instruction[19:15]] >> registers_temp[instruction[24:20]][5:0];
                  rd = instruction[11:7];
                  write_enable = 1;
                end else if (instruction[31:25] == 7'b0100000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 >>> rs2 (arithmetic shift)
                  $display("%x: SRA r%0d", pc, instruction[11:7]);

                  result = $signed(registers_temp[instruction[19:15]]) >>> registers_temp[instruction[24:20]][5:0];
                  rd = instruction[11:7];
                  write_enable = 1;
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = (unsigned) rs1 / (unsigned) rs2
                  $display("%x: DIVU r%0d", pc, instruction[11:7]);

                  if (registers_temp[instruction[24:20]] != 0) begin
                    result = $unsigned(registers_temp[instruction[19:15]]) / $unsigned(registers_temp[instruction[24:20]]);
                  end else begin
                    result = -1;
                  end
                  rd = instruction[11:7];
                  write_enable = 1;
                end
              end
              3'b110: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 | rs2
                  $display("%x: OR r%0d", pc, instruction[11:7]);

                  result = registers_temp[instruction[19:15]] | registers_temp[instruction[24:20]];
                  rd = instruction[11:7];
                  write_enable = 1;
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 % rs2
                  $display("%x: REM r%0d", pc, instruction[11:7]);

                  if (registers_temp[instruction[24:20]] != 0) begin
                    result = $signed(registers_temp[instruction[19:15]]) % $signed(registers_temp[instruction[24:20]]);
                  end else begin
                    result = registers_temp[instruction[19:15]];
                  end
                  rd = instruction[11:7];
                  write_enable = 1;
                end
              end
              3'b111: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 & rs2
                  $display("%x: AND r%0d", pc, instruction[11:7]);

                  result = registers_temp[instruction[19:15]] & registers_temp[instruction[24:20]];
                  rd = instruction[11:7];
                  write_enable = 1;
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = (unsigned) rs1 % (unsigned) rs2
                  $display("%x: REMU r%0d", pc, instruction[11:7]);

                  if (registers_temp[instruction[24:20]] != 0) begin
                    result = $unsigned(registers_temp[instruction[19:15]]) % $unsigned(registers_temp[instruction[24:20]]);
                  end else begin
                    result = registers_temp[instruction[19:15]];
                  end
                  rd = instruction[11:7];
                  write_enable = 1;
                end
              end
            endcase
          end
          7'b0111011: begin
            case (instruction[14:12])
              3'b000: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = (rs1 + rs2)[31:0]
                  $display("%x: ADDW r%0d", pc, instruction[11:7]);
                  temp_result = registers_temp[instruction[19:15]] + registers_temp[instruction[24:20]];

                  result = $signed(temp_result[31:0]);
                  rd = instruction[11:7];
                  write_enable = 1;
                end else if (instruction[31:25] == 7'b0100000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = (rs1 - rs2)[31:0]
                  $display("%x: SUBW r%0d", pc, instruction[11:7]);
                  temp_result = registers_temp[instruction[19:15]] - registers_temp[instruction[24:20]];

                  result = $signed(temp_result[31:0]);
                  rd = instruction[11:7];
                  write_enable = 1;
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = (rs1 * rs2)[31:0]
                  $display("%x: MULW r%0d", pc, instruction[11:7]);
                  temp_result = registers_temp[instruction[19:15]] * registers_temp[instruction[24:20]];

                  result = $signed(temp_result[31:0]);
                  rd = instruction[11:7];
                  write_enable = 1;
                end
              end
              3'b001: begin
                // [19:15] rs1 [24:20] rs2 [11:7] rd
                // rd = (rs1 << rs2)[31:0]
                $display("%x: SLLW r%0d", pc, instruction[11:7]);
                temp_result = registers_temp[instruction[19:15]] << registers_temp[instruction[24:20]][4:0];

                result = $signed(temp_result[31:0]);
                rd = instruction[11:7];
                write_enable = 1;
              end
              3'b100: begin
                // [19:15] rs1 [24:20] rs2 [11:7] rd
                // rd = (rs1 / rs2)[31:0]
                $display("%x: DIVW r%0d", pc, instruction[11:7]);

                if (registers_temp[instruction[24:20]] != 0) begin
                  temp_result = $signed(registers_temp[instruction[19:15]]) / $signed(registers_temp[instruction[24:20]]);
                  result = $signed(temp_result[31:0]);
                end else begin
                  result = -1;
                end
                rd = instruction[11:7];
                write_enable = 1;
              end
              3'b101: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = (rs1 >> rs2)[31:0] (logical shift)
                  $display("%x: SRLW r%0d", pc, instruction[11:7]);
                  temp_result = $unsigned(registers_temp[instruction[19:15]]) >> registers_temp[instruction[24:20]][4:0];

                  result = $signed(temp_result[31:0]);
                  rd = instruction[11:7];
                  write_enable = 1;
                end else if (instruction[31:25] == 7'b0100000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = (rs1 >>> rs2)[31:0] (arithmetic shift)
                  $display("%x: SRAW r%0d", pc, instruction[11:7]);
                  temp_result = $signed(registers_temp[instruction[19:15]]) >>> registers_temp[instruction[24:20]][4:0];

                  result = $signed(temp_result[31:0]);
                  rd = instruction[11:7];
                  write_enable = 1;
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = ((unsigned) rs1 / (unsigned) rs2)[31:0]
                  $display("%x: DIVUW r%0d", pc, instruction[11:7]);

                  if (registers_temp[instruction[24:20]] != 0) begin
                    temp_result = $unsigned(registers_temp[instruction[19:15]]) / $unsigned(registers_temp[instruction[24:20]]);
                    result = $signed(temp_result[31:0]);
                  end else begin
                    result = -1;
                  end
                  rd = instruction[11:7];
                  write_enable = 1;
                end
              end
              3'b110: begin
                // [19:15] rs1 [24:20] rs2 [11:7] rd
                // rd = (rs1 % rs2)[31:0]
                $display("%x: REMW r%0d", pc, instruction[11:7]);

                if (registers_temp[instruction[24:20]] != 0) begin
                  temp_result = $signed(registers_temp[instruction[19:15]]) % $signed(registers_temp[instruction[24:20]]);
                  result = $signed(temp_result[31:0]);
                end else begin
                  result = registers_temp[instruction[19:15]];
                end
                rd = instruction[11:7];
                write_enable = 1;
              end
              3'b111: begin
                // [19:15] rs1 [24:20] rs2 [11:7] rd
                // rd = ((unsigned) rs1 % (unsigned) rs2)[31:0]
                $display("%x: REMUW r%0d", pc, instruction[11:7]);

                if (registers_temp[instruction[24:20]] != 0) begin
                  temp_result = $unsigned(registers_temp[instruction[19:15]]) % $unsigned(registers_temp[instruction[24:20]]);
                  result = $signed(temp_result[31:0]);
                end else begin
                  result = registers_temp[instruction[19:15]];
                end
                rd = instruction[11:7];
                write_enable = 1;
              end
            endcase
          end
          7'b0110111: begin
            // [31:12] imm [11:7] rd
            // rd = imm << 12
            $display("%x: LUI r%0d", pc, instruction[11:7]);

            result = {instruction[31:12], 12'b0};
            rd = instruction[11:7];
            write_enable = 1;
          end
          7'b0100011: begin
            case (instruction[14:12])
              3'b000: $display("%x: SB", pc);
              3'b001: $display("%x: SH", pc);
              3'b010: $display("%x: SW", pc);
              3'b011: $display("%x: SD", pc);
            endcase
            write_enable = 0;
          end
          7'b1100011: begin
            case (instruction[14:12])
              3'b000: $display("%x: BEQ", pc);
              3'b001: $display("%x: BNE", pc);
              3'b100: $display("%x: BLT", pc);
              3'b101: $display("%x: BGE", pc);
              3'b110: $display("%x: BLTU", pc);
              3'b111: $display("%x: BGEU", pc);
            endcase
            write_enable = 0;
          end
          7'b1101111: begin
            $display("%x: JAL r%0d", pc, instruction[11:7]);
            result = pc + 4;
            rd = instruction[11:7];
            write_enable = 1;
          end
          7'b1100111: begin
            $display("%x: JALR r%0d", pc, instruction[11:7]);
            result = pc + 4;
            rd = instruction[11:7];
            write_enable = 1;
          end
          default: begin
            $display("Unknown instruction: 0x%x", instruction);
            write_enable = 0;
          end
        endcase

        // NOTE: Commented this section out for visual comparison
        //    test progX.o test cases
        // 
        // $display("\n");
        for (count = 0; count < 32; count = count + 1) begin       
          $write("r%0d (", count);
          display_reg_name(count);
          $write(") : %h (decimal: %0d)", registers_temp[count], registers_temp[count]);

          $display("\n");
        end

      end
    end
  endtask

  always_ff @ (posedge clk)
    if (reset) begin
      //$display("Reset World!  @ %x", reset);
      pc <= entry; 
      m_axi_rready <= 1'b0;
      receive_ready <= 1'b0;
      receive_processing <= 1'b0;

      for (count = 0; count < 32; count = count + 1) begin
        registers[count] <= 64'b0;
      end
    end else begin
      //$display("pc: %x, araddr: %x, arburst: %b, arlen: %d", pc, m_axi_araddr, m_axi_arburst, m_axi_arlen);

      for (count = 0; count < 32; count = count + 1) begin
        registers_temp[count] = registers[count];
      end
      
      if (!m_axi_arvalid && !m_axi_rvalid && !receive_ready && !receive_processing) begin
        m_axi_araddr  <= pc;   
        m_axi_arburst <= 2'b10; 
        m_axi_arlen   <= 8'h07; 
        m_axi_arvalid <= 1'b1; 
        receive_processing <= 1'b1;
        //$display("Hello World1 0x%x: %x", pc, m_axi_arvalid);
      end

      if (m_axi_arready && m_axi_arvalid) begin
        m_axi_arvalid <= 0;
        //receive_processing <= 1'b1;
        //$display("Hello World2 0x%x: %x", pc, m_axi_arvalid);
      end

      if (m_axi_rvalid && m_axi_rready) begin
        //$display("Display: %x", m_axi_rdata);
        instruction_high = m_axi_rdata[63:32];
        instruction_low = m_axi_rdata[31:0];
        //$display("Display: %x", m_axi_rdata);

        decode_instruction(instruction_low, pc, registers_temp, result, rd, write_enable);
        if (write_enable && rd != 0) begin
          registers_temp[rd] = result;
        end

        decode_instruction(instruction_high, pc + 4, registers_temp, result, rd, write_enable);
        if (write_enable && rd != 0) begin
          registers_temp[rd] = result;
        end

        for (count = 0; count < 32; count = count + 1) begin
          registers[count] <= registers_temp[count];
        end

        // $display("Display: %x", m_axi_rlast);

        if (m_axi_rlast) begin
          //$display("m_axi_rlast is high at PC = %x.", pc);
          receive_ready <= 1'b0;
          receive_processing <= 1'b0;
          m_axi_rready <= 1'b0; 
          pc <= pc + 8;         
        end else begin
          pc <= pc + 8;        
          receive_ready <= 1'b1; 
          receive_processing <= 1'b0; 
          m_axi_rready <= 1'b1; 
        end

        // pc <= pc + 8;
        // receive_ready <= 1'b1;
        // receive_processing <= 1'b0;

        //m_axi_rready <= 1'b0;
      end else begin
        m_axi_rready <= 1'b1;
      end
    end

  initial begin
    $display("Initializing top, entry point = 0x%x", entry);
  end
endmodule
