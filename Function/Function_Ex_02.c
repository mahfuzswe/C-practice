// write 2 functions one to print "Hello" and second to print "Goodbye"

#include <stdio.h>

void printHello();   // declearation/prototype
void printGoodbye(); // declearation/prototype

int main()
{
    printHello();   // function call
    printGoodbye(); // function call

    return 0;
}

// function defination
void printHello()
{
    printf("Hello!\n");
}
// function defination
void printGoodbye()
{
    printf("Goodbye!\n");
}

// output:
// Hello!
// Goodbye!