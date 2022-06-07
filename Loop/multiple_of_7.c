
// Keep taking numbers as input from user until user enters a number which is multiple of 7

#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Enter number: ");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 7 == 0) // multiple of 7
        {
            break;
        }

    } while (1);
    printf("Thank you!");
    return 0;
}

// output:
// Enter number: 4
// 4
// Enter number: 12
// 12
// Enter number: 17
// 17
// Enter number: 14
// 14
// Thank you!