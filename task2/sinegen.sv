module sinegen #(
    parameter WIDTH = 8
)(
    input logic clk,
    input logic en,
    input logic rst,
    input logic [WIDTH-1:0] incr,
    input logic [WIDTH-1:0] offset,
    output logic [WIDTH-1:0] dout1,
    output logic [WIDTH-1:0] dout2
);

    logic [WIDTH-1:0] addr;

    counter counter1(
        .clk (clk),
        .en (en),
        .rst (rst),
        .incr (incr),
        .count (addr)
    );

    rom rom1(
        .clk (clk),
        .addr1 (addr),
        .addr2 (addr + offset),
        .dout1 (dout1),
        .dout2 (dout2)
    );

endmodule
