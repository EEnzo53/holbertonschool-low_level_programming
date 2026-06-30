1-Measurement Methodology
So, i use clock() in 3 exercices, one of them is only in intranet (but have a files in vscode), i was working inside vscode with ubuntu, i do a total of 3 test for all exercice
2- Observed Performance Differences

For the first output;
Iterations*1: 100000000
Execution time*2: 0.280637

Second Output;
Iterations: 100000000
Execution time: 0.291447 seconds

Third (and last) Output;
Iterations: 100000000
Execution time: 0.301795 seconds

We can note that the Iterations never change, that's normal because this is the number of the repeat inside the loop
But we can notice that Execution time change, but we see later why.

Second Exercice

First Output:
Naive algorithm result: 625025000
Naive algorithm time: 4.899871 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000177 seconds

Second Output:
Naive algorithm result: 625025000
Naive algorithm time: 5.075160 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000175 seconds

Third Output:
Naive algorithm result: 625025000
Naive algorithm time: 4.902903 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000174 seconds

So as we can see, again 1 result is always the same*1 (Naive algorithm result) but this time there an another one (Single-pass algorithm result) but this is for the same reason, this is a loops so the number will always be the same
And now there is two output with the mention "time", the first one (Naive algorithm time) is or the global time for finish all of the programme, otherwise, "Single-pass algorithm time" is the time for a single loop inside the loop and the time is for know hom many times is take for finish, we will see later again why the result of time is not the same

And now the last exercice, this one was a little bit more difficult, i had to instrument a multi-phase program and reason about where execution time is spent. And after finnaly finish, I compil with -gcc and this was my result;

First Output:
TOTAL seconds: 0.002016
BUILD_DATA seconds: 0.000818
PROCESS seconds: 0.000755
REDUCE seconds: 0.000427

Second Output:
TOTAL seconds: 0.002277
BUILD_DATA seconds: 0.001052
PROCESS seconds: 0.000797
REDUCE seconds: 0.000414

And third Output:
TOTAL seconds: 0.002040
BUILD_DATA seconds: 0.000769
PROCESS seconds: 0.000860
REDUCE seconds: 0.000396

So, BUILD_DATA is for the construct of all the data, PROCESS is for the traiting of all data, this is usually the much longer step because this is a little bit like the "hearth" of the programme, and REDUCE is the end of the programme, his adding all the result, this is the part less longer in time.
if we want,
BUILD_DATA --> Prepare all data
PROCESS --> Do all the calculations
REDUCE --> finalise the result

3-Relation Between Runtime and Energy Consumption

Longer runtime generally means higher energy consumption because the CPU is active longer. Faster algorithms use less energy.

4-Limitations of the Experiment
Earlier, I says that time is never the same and this is the reason why, with heat, CPU constantly in use in background, the cache file, and the power of your setup, all of that will have a important change.

5-Practical Engineering Takeaway
This is important because its a good thing to see how we can organize and optimize our code, not only for us, but for the earth, and i learn that benchmarks is important because they allow you to measure and compare program performance objectively.