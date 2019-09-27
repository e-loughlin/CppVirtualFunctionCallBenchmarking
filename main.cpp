
#include "ClassWithInheritance.h"
#include "ClassWithNoInheritance.h"

#include <iostream>

using namespace std;


void printUsage() 
{
    cout << "Benchmark Testing for Performance Impact of Virtual Function Calls\nUsage: <number_of_cycles> <Y/N>\n";
    cout << "Y = With Interface Inheritance \tN = Without Interface Inheritance" << endl;
}

void runWithInheritance(unsigned long long cycles, I_BaseClass& c)
{
    for(unsigned long long i = 0; i < cycles; i++)
    {
        c.functionA();
    }
}

void runWithoutInheritance(unsigned long long cycles, ClassWithNoInheritance& c)
{
    for(unsigned long long i = 0; i < cycles; i++)
    {
        c.functionA();
    }
}

int main(int argc, char * argv[])
{
    if(argc != 3) 
    {
        printUsage();
    }

    unsigned long long cycles;
    sscanf(argv[1], "%llu", &cycles);
    char selection = argv[2][0];

    ClassWithInheritance classWithInheritance;
    ClassWithNoInheritance classWithNoInheritance;
    if (selection == 'Y') 
    {
        runWithInheritance(cycles, classWithInheritance);
    }
    if (selection == 'N') 
    {
        runWithoutInheritance(cycles, classWithNoInheritance);
    }
}