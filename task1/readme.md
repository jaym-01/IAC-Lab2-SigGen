# Task 1

The image below shows the signal stored in the ROM being displayed:

![Alt text](20231107_144728.jpg)

 - To increase the frequency of the signal, values must be skipped for every clock cycle.
 - This is equivilent to increasing the arguement in a sine function -> as for the same increment of time, increasing the argument causes it to skip values. 
- Since the argument is increased, this is equivilent to increasing the frequnency. 

At a higher frequency:
![Alt text](20231107_144749.jpg)

At the highest frequency:
![Alt text](20231107_144756.jpg)

The signal becomes less smooth, looking more like it is made up of dots due to the fact that it is skipping values, since it misses the values inbetween the dots, it leaves a large gap between them, which widens as frequency increases.

When the increment is 1, each address (count output) is read one after another (since the output gives the address to read):
![Alt text](image-1.png)

Then when the value of `vbdValue()` increases, the increment increases, increasing the step each clock cycle that the memory address is read from:
![Alt text](image-2.png)