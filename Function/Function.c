// Functions: block of code that performs particular task

//                  Functions
//                 ----------
// take argument --> do work --> return result

// it can be used multiple times
// increse code reusability

// Syntax 1:
// ---------
// Function prototype/declearation
// void printHello();      >> Telling that we are declearing a function

// Syntax 2:
// ---------
// Function defination
// void printHello(){
//     printf("Hello");    >> Do the work
// }

// Syntax 3:
// ---------
// Function Call
// int main()
// {
//     printHello();       >> Use the work
//     return 0;
// }

#include <stdio.h>
void printHello(); // declearation / prototype     ..01

int main()
{
    printHello(); // function call                 ..03
    return 0;
}
// finction defination                             ..02
void printHello()
{
    printf("Hello world!\n");
}

// output:
// Hello world!
