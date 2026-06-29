1- Measurement Methodology

I used clock() in three exercises. One was from the intranet but executed locally in VSCode on Ubuntu. I ran each exercise three times to measure execution time and reduce variability.

2- Observed Performance Differences

First exercise:
Iterations were fixed at 100000000 because they represent the number of loop executions. Execution time varied slightly across runs:

0.280637 s
0.291447 s
0.301795 s

This variation is normal due to system noise and background processes.

Second exercise:
I compared a naive algorithm with a single-pass version.

Naive algorithm:

~5 seconds execution time
Result: 625025000

Single-pass algorithm:

~0.00017 seconds
Result: 25000

The naive version is much slower because it performs more computations, while the optimized version reduces the number of operations.

Third exercise:
I analyzed a multi-phase program:

BUILD_DATA prepares input data
PROCESS performs computations
REDUCE aggregates results

The total time is stable (~0.002 s). PROCESS is generally the most time-consuming phase.

3- Relation Between Runtime and Energy Consumption

Longer execution time generally leads to higher energy consumption because the CPU stays active longer. Faster algorithms therefore consume less energy.

4- Limitations of the Experiment

Execution time varies slightly due to CPU load, background processes, cache effects, and system noise. These factors explain the small differences between runs.

5- Practical Engineering Takeaway

Benchmarks are useful because they allow objective comparison of program performance. They help identify inefficient code and guide optimization decisions based on real measurements.