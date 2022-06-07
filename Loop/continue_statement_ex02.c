// Print all numbers from 1 to 10 except for 6

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6) // skip
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}

// output:
// 1
// 2
// 3
// 4
// 5
// 7
// 8
// 9
// 10
