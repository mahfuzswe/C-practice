//C Program To Count Each Digit In A Number using Arrays

#include<stdio.h>

int main()
{
    int a[10] = {0}, num, rem, i;

    printf("Enter a positive number\n");
    scanf("%d",&num);

    while(num)
    {
        rem = num % 10;
        a[rem] = a[rem] + 1;
        num = num / 10;

    }
    printf("\n");

    for(i = 0; i< 10; i++)
    {
        if(a[i] != 0)
            printf("%d has appeared %d times.\n",i,a[i]);

    }

    return 0;
}
