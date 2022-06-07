#include <stdio.h>
void calculatePrice(float value);

int main()
{
    float value = 100.00;
    calculatePrice(value);
    return 0;
}
void calculatePrice(float value)
{
    value = value + (0.18 * value);
    printf("final price is: %.3f", value);
}

// output:
// final price is: 118.000
