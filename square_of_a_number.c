// Use library functions to calculate the square of a number given by user

#include <stdio.h>
#include <math.h>

int squareArea(int side);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("area is : %d\n", squareArea(n));
    return 0;
}

int squareArea(int side)
{
    return side * side;
}