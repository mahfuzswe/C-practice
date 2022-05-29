// Write a function to calculate area of a square , a circle and a rectangle

#include <stdio.h>
#include <math.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main()
{
    float side = 6.00;
    float rad = 4.00;
    float a = 5.00;
    float b = 10.00;

    printf("area of square is: %.2f\n", squareArea(side));
    printf("area of circle is: %.2f\n", circleArea(rad));
    printf("area of rectangle is: %.2f\n", rectangleArea(a, b));
    return 0;
}

float squareArea(float side)
{
    return side * side;
}
float circleArea(float rad)
{
    return 3.14 * rad * rad;
}
float rectangleArea(float a, float b)
{
    return a * b;
}

// output:
// area of square is: 36.00
// area of circle is: 50.24
// area of rectangle is: 50.00