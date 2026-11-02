## 1. Measurement Methodology

Compiled with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`. I use the function `clock()`, which returns the CPU time consumed by a process in "ticks". I call it before printing the value with `printf`, and I run each project 3 times.

## 2. Observed Performance Differences

-- Baseline Execution Measurement

Iterations: 100000000
Execution time: 0.309966 seconds     -----> The fastest

Iterations: 100000000
Execution time: 0.333586 seconds     -----> A little bit slower

Iterations: 100000000
Execution time: 0.350428 seconds     -----> Slower than the first two

If you run the same program many times, the execution is slower each time.

---

Algorithmic Efficiency Comparison

Naive algorithm result: 625025000
Naive algorithm time: 3.893149 seconds
Single-pass algorithm result: 2500
Single-pass algorithm time: 0.000136 seconds

Naive algorithm result: 625025000
Naive algorithm time: 3.880594 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000113 seconds

Naive algorithm result: 625025000
Naive algorithm time: 3.892884 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000138 seconds

The program takes globally the same time, with no big changes, but the second one is faster than the other two. The single-pass algorithm is thousands of times faster than the naive one, which shows how much the choice of algorithm matters.

---

Instrumentation Lab Comparison

TOTAL seconds: 0.002677
BUILD_DATA seconds: 0.001059
PROCESS seconds: 0.001201
REDUCE seconds: 0.000417

TOTAL seconds: 0.002262
BUILD_DATA seconds: 0.000939
PROCESS seconds: 0.000835
REDUCE seconds: 0.000488

TOTAL seconds: 0.001265
BUILD_DATA seconds: 0.000540
PROCESS seconds: 0.000458
REDUCE seconds: 0.000267

The last one is much faster than the other two.

## 3. Relation Between Runtime and Energy Consumption

A CPU that is used more indicates that a process takes more time to complete a simple task, which doubles the time needed for the consumption of energy and power.
In C, a proxy is like pointers or function pointers. Since a longer runtime keeps the CPU active longer, runtime is a reasonable proxy for energy, even though it does not measure real power in watts.

## 4. Limitations of the Experiment

I have one big limitation in my project 3: I didn't use `clock()` for the value of TOTAL. I preferred to add all the results together to get the sum of all of them.
My results will never be the same as others', or even the same if I redo the programs, because they always depend on many things, like the heat of the software and the software as a whole. The precision of `clock()` is also limited for very short phases.

## 5. Practical Engineering Takeaway

If I may add one thing: take the easiest way to reach your result, because it can often be the most efficient way too.