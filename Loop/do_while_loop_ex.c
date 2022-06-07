// keep taking numbers as input from user until user enters an odd number.

#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("enter number: ");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 2 != 0)
        {
            break;
        }

    } while (1);
    printf("Thank you!");

    return 0;
}

// output:
// enter number: 6
// 6
// enter number: 8
// 8
// enter number: 5
// 5
// Thank you!
