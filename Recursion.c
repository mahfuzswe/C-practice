// When a function calls it self, it's called recursion

// print "Hello World" 5 times

// in programming we can do a progrm simultinuously with Recursion and Loop

#include <stdio.h>
void printHW(int count); // function declearation

int main()
{

    printHW(5);
    return 0;
}

// Recursive function
void printHW(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello World\n");
    printHW(count - 1);
}
