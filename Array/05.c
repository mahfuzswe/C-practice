#include <stdio.h>

int main()
{
    int arr[10] = {2,4,6,8,9,2,0,4,6,7},i;

    for(i=0; i<10; i++)
    {
        if(arr[i]==7)
        {
            printf("arr[%d]\n",i);

        }
    }

    return 0;
}