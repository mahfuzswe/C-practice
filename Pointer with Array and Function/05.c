#include<stdio.h>

int sum(int *a, int size){ //return the sum of the array
    int i, sum = 0;
    for(i = 0; i<size; i++){
        sum = sum + *(a + i);
    }
    return sum;
}



int main()
{
    int arr[3] = {4,5,10};
    int result = sum(arr,3);
    printf("Sum of the array is: %d\n",result);

    return 0;
}



