#include <stdio.h>
// declearation/prototype
void printHello();
int main()
{
    printHello();
    printHello(); // function call
    printHello();

    return 0;
}
// function defination
void printHello()
{
    printf("Hello world!\n");
}

// output:
// Hello world!
// Hello world!
// Hello world!