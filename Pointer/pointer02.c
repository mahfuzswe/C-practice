#include<stdio.h>

int main()
{
    char ch = 'a';
    char *ptr;
    ptr = &ch;

    printf("%c\n",ch);

    printf("%c\n",*ptr);


    return 0;
}
