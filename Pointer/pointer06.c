#include<stdio.h>

int main()
{
    printf("Pointer in C: Introduction\n");

    char x = 'y';
    char *p;
    p = &x;

    printf("value of x: %c\n",x);
    printf("value of x: %c\n",*p);

    return 0;
}
