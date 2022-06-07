// print reverse of the table for a number n

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 10; i >= 1; i--)
    {
        printf("%d\n", n * i);
    }

    return 0;
}

// output:
// Enter number: 5
// 50
// 45
// 40
// 35
// 30
// 25
// 20
// 15
// 10
// 5