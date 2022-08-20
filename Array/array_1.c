#include<stdio.h>

int main()
{
    int a[10],i,sum=0;

    printf("Enter the values of the array: ");
    for(i=0 ; i<10; i++){
        scanf("%d",&a[i]);
    }
    for(i=0 ; i<10; i++){
        sum=sum+a[i];
     }
    printf("Sum of the array: %d\n",sum);
    
    
    
    
    return 0;
}
