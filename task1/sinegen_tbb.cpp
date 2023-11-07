#include "vbuddy.cpp"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vsinegen.h"
#include "iostream"

int main(int argc, char **argv, char **env){
    Verilated::commandArgs(argc, argv);

    Vsinegen *top = new Vsinegen;

    Verilated::traceEverOn(true);
    // VerilatedVcdC *tfp = new VerilatedVcdC;
    // top->trace(tfp, 99);
    // tfp->open("sinegencd.vcd");

    if(vbdOpen() != 1) return -1;

    vbdHeader("Lab2: Sine Gen"); 

    // init simulation inputs
    top->en = 0;
    top->rst = 1;
    top->clk = 1;
    top->incr = 1;

    for(int i = 0; i < 1000000; i++){
        for(int j = 0; j < 2; j++){
            top->clk = !top->clk;
            top->eval();
        }

        vbdPlot(top->dout, 0, 255);

        top->rst = (i < 3);
        top->en = (i > 2);

        // COMMENT OUT FOR ORIGINAL BEHAVIOUR
        // increasing the increment -> causes it to skip values
        // this skippling values means that the argument 2*pi*f is greater
        // this means that f increases
        top->incr = (vbdValue()/10) + 1;

        if(Verilated::gotFinish() || vbdGetkey() == 'q') exit(0);

    }

    vbdClose();
    exit(0);
}