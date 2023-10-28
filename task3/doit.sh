rm -r obj_dir
sudo rm sigdelay.vcd

verilator -Wall --cc --trace counter.sv --exe sigdelay_tb.cpp
verilator -Wall --cc --trace ram.sv --exe sigdelay_tb.cpp
verilator -Wall --cc --trace sigdelay.sv --exe sigdelay_tb.cpp

make -j -C obj_dir/ -f Vsigdelay.mk Vsigdelay

# require super user privledges to access port?
sudo obj_dir/Vsigdelay