module sigdelay #(
    parameter DATA_WIDTH = 8,
    ADDRESS_WIDTH = 9
)(
    input logic clk,
    input logic rst,
    input logic wr,
    input logic rd,
    input logic [DATA_WIDTH-1:0] mic_signal,
    input logic [DATA_WIDTH-1:0] offset,
    output logic [DATA_WIDTH-1:0] delayed_signal
);

logic [ADDRESS_WIDTH-1:0] wAddr;

counter counter1(
    .clk (clk),
    .en (1'b1),
    .rst (rst),
    .count (wAddr)
);

ram ram1(
    .clk (clk),
    .we1 (wr),
    .we2 (1'b0),
    .re1 (1'b0),
    .re2 (rd),
    .din1 (mic_signal),
    .din2 ({DATA_WIDTH{1'b0}}),
    .addr1 (wAddr),
    .addr2 (wAddr - offset),
    .dout2 (delayed_signal)
);

endmodule
