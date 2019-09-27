# CppVirtualFunctionCallBenchmarking
Benchmark tests for C++: Comparing performance reduction caused by virtual function calls.

### Compile Instructions
`$ g++ *.cpp -O0 -o benchmarker`

(Note: -O0 turns off compiler optimization)

### Usage Instructions (Linux)
`$ time ./benchmarker <number_of_cycles> <Y/N>`

Y = With Inheritance    N = No Inheritance

### Sample Output

![alt text](https://github.com/emloughl/CppVirtualFunctionCallBenchmarking/blob/master/sample_output.PNG)
