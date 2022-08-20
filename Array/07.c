#include <stdio.h>

int main()
{
    int arr[10] = {2,4,6,8,9,2,0,4,6,7},i;
    for(i=9; i>=0; i--)
    {
        printf("%d\t",arr[i]);
    }
    

    return 0;
}