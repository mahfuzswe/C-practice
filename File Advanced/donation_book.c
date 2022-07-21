// Donation book for school.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("donation.txt", "r");

    // char name[20];
    // int donation = 0, i;

    // for (i = 0; i < 5; i++)
    // {
    //     printf("Please, Enter name: ");
    //     scanf("%s", name);

    //     printf("Enter amount: ");
    //     scanf("%d", &donation);

    //     fprintf(fp, "%s %d\n", name, donation);
    // }

    char b[20];
    int sum = 0;
    while (1)
    {
        int code = fscanf(fp, "%s", b);
        if (code == EOF)
        {
            break;
        }
        printf("%s ", b);

        code = fscanf(fp, "%s", b);
        if (code == EOF)
        {
            break;
        }
        printf("%s\n", b);
        sum = sum + atoi(b);
    }
    printf("Total donation: %d\n", sum);

    return 0;
}