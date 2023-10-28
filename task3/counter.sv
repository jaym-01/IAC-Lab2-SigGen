module counter #(
    parameter DATA_WIDTH = 9
)(
    input logic clk,
    input logic en,
    input logic rst,
    output logic [DATA_WIDTH-1:0] count
);

always_ff @(posedge clk)
    if(rst) count <= {DATA_WIDTH{1'b0}};
    else if(en) count <= count + {{DATA_WIDTH-1{1'b0}}, 1'b1};

endmodule
