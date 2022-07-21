#include<stdio.h>

int main()
{
    int x;
    x=10;

    int *ptr;
    ptr=&x;

    printf("value of x is: %d\n",x);

    printf("address of x is: %p\n",&x);

    printf("pointer: %p\n",ptr);


    return 0;
}
