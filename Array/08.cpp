#include<stdio.h>

int main(){

    int arr[10] = {2,4,6,8,9,2,0,4,6,7};
    int c=1;

    for(int i=0; i<10; i++)
    {
        if(arr[i]==8)
            printf("arr[%d]\n",i);
        else
            c++;
    }
    if(c==11)
        printf("Not in array.\n");


    return 0;
}
