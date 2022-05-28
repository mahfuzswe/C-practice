// Print the factorial of a number

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Final factorial is: %d\n", fact);

    return 0;
}

// output:
// Enter number: 5
// Final factorial is: 120 