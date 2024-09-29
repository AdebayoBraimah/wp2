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

  logic [4:0] temp5;
  logic [11:0] temp12;
  logic [19:0] temp20;
  logic [63:0] temp64;
  logic [63:0] temp_result;

  task decode_instruction;
    input [31:0] instruction;
    input [63:0] pc;
    $display("Display: %x", instruction);
    begin
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
          end
          7'b0010011: begin
            case (instruction[14:12])
              3'b000: begin
                // [31:20] imm [19:15] rs1 [11:7] rd
                // rd = rs1 + imm
                $display("%x: ADDI r%0d", pc, instruction[11:7]);
                temp12 = instruction[31:20];
                temp64 = {{52{instruction[31]}}, temp12};
                registers[instruction[11:7]] <= registers[instruction[19:15]] + temp64;
              end
              3'b010: begin
                // [31:20] imm [19:15] rs1 [11:7] rd
                // if (rs1 < imm) then rd = 1 else rd = 0
                $display("%x: SLTI r%0d", pc, instruction[11:7]);
                temp12 = instruction[31:20];
                temp64 = {{52{instruction[31]}}, temp12};

                if ($signed(registers[instruction[19:15]]) < $signed(temp64)) begin
                  registers[instruction[11:7]] <= 64'b1;
                end else begin
                  registers[instruction[11:7]] <= 64'b0;
                end
              end
              3'b011: begin
                // [31:20] imm [19:15] rs1 [11:7] rd
                // if (rs1 < imm (unsigned)) then rd = 1 else rd = 0
                $display("%x: SLTIU r%0d", pc, instruction[11:7]);
                temp12 = instruction[31:20];
                temp64 = {{52{instruction[31]}}, temp12};

                if ($unsigned(registers[instruction[19:15]]) < $unsigned(temp64)) begin
                  registers[instruction[11:7]] <= 64'b1;
                end else begin
                  registers[instruction[11:7]] <= 64'b0;
                end
              end
              3'b100: begin
                // [31:20] imm [19:15] rs1 [11:7] rd
                // rd = rs1 ^ imm
                $display("%x: XORI r%0d", pc, instruction[11:7]);
                temp12 = instruction[31:20];
                temp64 = {{52{instruction[31]}}, temp12};

                registers[instruction[11:7]] <= registers[instruction[19:15]] ^ temp64;
              end
              3'b110: begin
                // [31:20] imm [19:15] rs1 [11:7] rd
                // rd = rs1 | imm
                $display("%x: ORI r%0d", pc, instruction[11:7]);
                temp12 = instruction[31:20];
                temp64 = {{52{instruction[31]}}, temp12};

                registers[instruction[11:7]] <= registers[instruction[19:15]] | temp64;
              end
              3'b111: begin
                // [31:20] imm [19:15] rs1 [11:7] rd
                // rd = rs1 & imm
                $display("%x: ANDI r%0d", pc, instruction[11:7]);
                temp12 = instruction[31:20];
                temp64 = {{52{instruction[31]}}, temp12};

                registers[instruction[11:7]] <= registers[instruction[19:15]] & temp64;
              end
              3'b001: begin
                // [24:20] shamt [19:15] rs1 [11:7] rd
                // rd = rs1 << shamt (logical shift)
                $display("%x: SLLI r%0d", pc, instruction[11:7]);
                temp5 = instruction[24:20];

                registers[instruction[11:7]] <= registers[instruction[19:15]] << temp5;
              end
              3'b101: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [24:20] shamt [19:15] rs1 [11:7] rd
                  // rd = rs1 >> shamt (logical shift)
                  $display("%x: SRLI r%0d", pc, instruction[11:7]);
                  temp5 = instruction[24:20];

                  registers[instruction[11:7]] <= registers[instruction[19:15]] >> temp5;
                end else if (instruction[31:25] == 7'b0100000) begin
                  // [24:20] shamt [19:15] rs1 [11:7] rd
                  // rd = rs1 >>> shamt (arithmetic shift)
                  $display("%x: SRAI r%0d", pc, instruction[11:7]);
                  temp5 = instruction[24:20];

                  registers[instruction[11:7]] <= $signed(registers[instruction[19:15]]) >>> temp5;
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

            registers[instruction[11:7]] <= pc + temp64;
          end
          7'b0011011: begin
            case (instruction[14:12])
              3'b000: begin
                // [31:20] imm [19:15] rs1 [11:7] rd
                // rd = (rs1 + imm)[31:0]
                $display("%x: ADDIW r%0d", pc, instruction[11:7]);
                temp12 = instruction[31:20];
                temp64 = {{52{instruction[31]}}, temp12};
                temp_result = registers[instruction[19:15]] + temp64;

                registers[instruction[11:7]] <= $signed(temp_result[31:0]);
              end
              3'b001: begin
                // [24:20] shamt [19:15] rs1 [11:7] rd
                // rd = (rs1 << shamt)[31:0]
                $display("%x: SLLIW r%0d", pc, instruction[11:7]);
                temp5 = instruction[24:20];
                temp_result = registers[instruction[19:15]] << temp5;

                registers[instruction[11:7]] <= $signed(temp_result[31:0]);
              end
              3'b101: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [24:20] shamt [19:15] rs1 [11:7] rd
                  // rd = (rs1 >> shamt)[31:0] (logical shift)
                  $display("%x: SRLIW r%0d", pc, instruction[11:7]);
                  temp5 = instruction[24:20];
                  temp_result = $unsigned(registers[instruction[19:15]]) >> temp5;

                  registers[instruction[11:7]] <= $signed(temp_result[31:0]);
                end else if (instruction[31:25] == 7'b0100000) begin
                  // [24:20] shamt [19:15] rs1 [11:7] rd
                  // rd = (rs1 >>> shamt)[31:0] (arithmetic shift)
                  $display("%x: SRAIW r%0d", pc, instruction[11:7]);
                  temp5 = instruction[24:20];
                  temp_result = $signed(registers[instruction[19:15]]) >>> temp5;

                  registers[instruction[11:7]] <= $signed(temp_result[31:0]);
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

                  registers[instruction[11:7]] <= registers[instruction[19:15]] + registers[instruction[24:20]];
                end else if (instruction[31:25] == 7'b0100000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 - rs2
                  $display("%x: SUB r%0d", pc, instruction[11:7]);

                  registers[instruction[11:7]] <= registers[instruction[19:15]] - registers[instruction[24:20]];
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 * rs2
                  $display("%x: MUL r%0d", pc, instruction[11:7]);

                  registers[instruction[11:7]] <= registers[instruction[19:15]] * registers[instruction[24:20]];
                end
              end
              3'b001: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 << rs2 (logical shift)
                  $display("%x: SLL r%0d", pc, instruction[11:7]);

                  registers[instruction[11:7]] <= registers[instruction[19:15]] << registers[instruction[24:20]][5:0];
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 * rs2 (the upper 64 bits)
                  $display("%x: MULH r%0d", pc, instruction[11:7]);

                  registers[instruction[11:7]] <= ($signed(registers[instruction[19:15]]) * $signed(registers[instruction[24:20]])) >> 64;
                end
              end
              3'b010: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // if (rs1 < rs2) then rd = 1 else rd = 0
                  $display("%x: SLT r%0d", pc, instruction[11:7]);

                  if ($signed(registers[instruction[19:15]]) < $signed(registers[instruction[24:20]])) begin
                    registers[instruction[11:7]] <= 64'b1;
                  end else begin
                    registers[instruction[11:7]] <= 64'b0;
                  end
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 * (unsigned) rs2 (the upper 64 bits)
                  $display("%x: MULHSU r%0d", pc, instruction[11:7]);

                  registers[instruction[11:7]] <= ($signed(registers[instruction[19:15]]) * $unsigned(registers[instruction[24:20]])) >> 64;
                end
              end
              3'b011: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // if ((unsigned)rs1 < (unsigned)rs2) then rd = 1 else rd = 0 
                  $display("%x: SLTU r%0d", pc, instruction[11:7]);

                  if ($unsigned(registers[instruction[19:15]]) < $unsigned(registers[instruction[24:20]])) begin
                    registers[instruction[11:7]] <= 64'b1;
                  end else begin
                    registers[instruction[11:7]] <= 64'b0;
                  end
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = (unsigned) rs1 * (unsigned) rs2 (the upper 64 bits)
                  $display("%x: MULHU r%0d", pc, instruction[11:7]);

                  registers[instruction[11:7]] <= (($unsigned(registers[instruction[19:15]]) * $unsigned(registers[instruction[24:20]])) >> 64);
                end
              end
              3'b100: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 ^ rs2
                  $display("%x: XOR r%0d", pc, instruction[11:7]);

                  registers[instruction[11:7]] <= registers[instruction[19:15]] ^ registers[instruction[24:20]];
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 / rs2
                  $display("%x: DIV r%0d", pc, instruction[11:7]);

                  if (registers[instruction[24:20]] != 0) begin
                    registers[instruction[11:7]] <= $signed(registers[instruction[19:15]]) / $signed(registers[instruction[24:20]]);
                  end else begin
                    registers[instruction[11:7]] <= 64'b0;
                  end
                end
              end
              3'b101: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 >> rs2 (logical shift)
                  $display("%x: SRL r%0d", pc, instruction[11:7]);

                  registers[instruction[11:7]] <= registers[instruction[19:15]] >> registers[instruction[24:20]][5:0];
                end else if (instruction[31:25] == 7'b0100000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 >>> rs2 (arithmetic shift)
                  $display("%x: SRA r%0d", pc, instruction[11:7]);

                  registers[instruction[11:7]] <= $signed(registers[instruction[19:15]]) >>> registers[instruction[24:20]][5:0];
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = (unsigned) rs1 / (unsigned) rs2 
                  $display("%x: DIVU r%0d", pc, instruction[11:7]);

                  if (registers[instruction[24:20]] != 0) begin
                    registers[instruction[11:7]] <= $unsigned(registers[instruction[19:15]]) / $unsigned(registers[instruction[24:20]]);
                  end else begin
                    registers[instruction[11:7]] <= 64'b0;
                  end
                end
              end
              3'b110: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 | rs2
                  $display("%x: OR r%0d", pc, instruction[11:7]);

                  registers[instruction[11:7]] <= registers[instruction[19:15]] | registers[instruction[24:20]];
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 % rs2
                  $display("%x: REM r%0d", pc, instruction[11:7]);

                  if (registers[instruction[24:20]] != 0) begin
                    registers[instruction[11:7]] <= $signed(registers[instruction[19:15]]) % $signed(registers[instruction[24:20]]);
                  end else begin
                    registers[instruction[11:7]] <= 64'b0;
                  end
                end
              end
              3'b111: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = rs1 & rs2
                  $display("%x: AND r%0d", pc, instruction[11:7]);

                  registers[instruction[11:7]] <= registers[instruction[19:15]] & registers[instruction[24:20]];
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = (unsigned) rs1 % (unsigned) rs2
                  $display("%x: REMU r%0d", pc, instruction[11:7]);

                  if (registers[instruction[24:20]] != 0) begin
                    registers[instruction[11:7]] <= $unsigned(registers[instruction[19:15]]) % $unsigned(registers[instruction[24:20]]);
                  end else begin
                    registers[instruction[11:7]] <= 64'b0;
                  end
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
                  temp_result = registers[instruction[19:15]] + registers[instruction[24:20]];

                  registers[instruction[11:7]] <= $signed(temp_result[31:0]);
                end else if (instruction[31:25] == 7'b0100000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = (rs1 - rs2)[31:0]
                  $display("%x: SUBW r%0d", pc, instruction[11:7]);
                  temp_result = registers[instruction[19:15]] - registers[instruction[24:20]];

                  registers[instruction[11:7]] <= $signed(temp_result[31:0]);
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = (rs1 * rs2)[31:0]
                  $display("%x: MULW r%0d", pc, instruction[11:7]);
                  temp_result = registers[instruction[19:15]] * registers[instruction[24:20]];

                  registers[instruction[11:7]] <= $signed(temp_result[31:0]);
                end
              end
              3'b001: begin
                // [19:15] rs1 [24:20] rs2 [11:7] rd
                // rd = (rs1 << rs2)[31:0]
                $display("%x: SLLW r%0d", pc, instruction[11:7]);
                temp_result = registers[instruction[19:15]] << registers[instruction[24:20]][4:0];

                registers[instruction[11:7]] <= $signed(temp_result[31:0]);
              end
              3'b100: begin
                // [19:15] rs1 [24:20] rs2 [11:7] rd
                // rd = (rs1 / rs2)[31:0]
                $display("%x: DIVW r%0d", pc, instruction[11:7]);

                if (registers[instruction[24:20]] != 0) begin
                  temp_result = $signed(registers[instruction[19:15]]) / $signed(registers[instruction[24:20]]);
                  registers[instruction[11:7]] <= $signed(temp_result[31:0]);
                end else begin
                  registers[instruction[11:7]] <= 64'b0;
                end
              end
              3'b101: begin
                if (instruction[31:25] == 7'b0000000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = (rs1 >> rs2)[31:0] (logical shift)
                  $display("%x: SRLW r%0d", pc, instruction[11:7]);
                  temp_result = $unsigned(registers[instruction[19:15]]) >> registers[instruction[24:20]][4:0];

                  registers[instruction[11:7]] <= $signed(temp_result[31:0]);
                end else if (instruction[31:25] == 7'b0100000) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = (rs1 >>> rs2)[31:0] (arithmetic shift)
                  $display("%x: SRAW r%0d", pc, instruction[11:7]);
                  temp_result = $signed(registers[instruction[19:15]]) >>> registers[instruction[24:20]][4:0];

                  registers[instruction[11:7]] <= $signed(temp_result[31:0]);
                end else if (instruction[31:25] == 7'b0000001) begin
                  // [19:15] rs1 [24:20] rs2 [11:7] rd
                  // rd = ((unsigned) rs1 / (unsigned) rs2)[31:0]
                  $display("%x: DIVUW r%0d", pc, instruction[11:7]);

                  if (registers[instruction[24:20]] != 0) begin
                    temp_result = $unsigned(registers[instruction[19:15]]) / $unsigned(registers[instruction[24:20]]);
                    registers[instruction[11:7]] <= $signed(temp_result[31:0]);
                  end else begin
                    registers[instruction[11:7]] <= 64'b0;
                  end
                end
              end
              3'b110: begin
                // [19:15] rs1 [24:20] rs2 [11:7] rd
                // rd = (rs1 % rs2)[31:0]
                $display("%x: REMW r%0d", pc, instruction[11:7]);

                if (registers[instruction[24:20]] != 0) begin
                  temp_result = $signed(registers[instruction[19:15]]) % $signed(registers[instruction[24:20]]);
                  registers[instruction[11:7]] <= $signed(temp_result[31:0]);
                end else begin
                  registers[instruction[11:7]] <= 64'b0;
                end
              end
              3'b111: begin
                // [19:15] rs1 [24:20] rs2 [11:7] rd
                // rd = ((unsigned) rs1 % (unsigned) rs2)[31:0]
                $display("%x: REMUW r%0d", pc, instruction[11:7]);

                if (registers[instruction[24:20]] != 0) begin
                  temp_result = $unsigned(registers[instruction[19:15]]) % $unsigned(registers[instruction[24:20]]);
                  registers[instruction[11:7]] <= $signed(temp_result[31:0]);
                end else begin
                  registers[instruction[11:7]] <= 64'b0;
                end
              end
            endcase
          end
          7'b0110111: begin
            // [31:12] imm [11:7] rd
            // rd = imm << 12
            $display("%x: LUI r%0d", pc, instruction[11:7]);

            registers[instruction[11:7]] <= {instruction[31:12], 12'b0};
          end
          7'b0100011: begin
            case (instruction[14:12])
              3'b000: $display("%x: SB", pc);
              3'b001: $display("%x: SH", pc);
              3'b010: $display("%x: SW", pc);
              3'b011: $display("%x: SD", pc);
            endcase
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
          end
          7'b1101111: $display("%x: JAL r%0d", pc, instruction[11:7]);
          7'b1100111: $display("%x: JALR r%0d", pc, instruction[11:7]);
          default: $display("Unknown instruction: 0x%x", instruction);
        endcase

        // NOTE: Commented this section out for visual comparison
        //    test progX.o test cases
        // 
        for (count = 0; count < 32; count = count + 1) begin
          $display("r%0d: %h", count, registers[count]);
        end

      end
    end
  endtask

  integer count;

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

        decode_instruction(instruction_low, pc);
        decode_instruction(instruction_high, pc + 4);

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
