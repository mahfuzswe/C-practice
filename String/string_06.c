#include<stdio.h>
#include<string.h>

int main(){
    char a[20]="Bangladesh";
    char b[20]= "Dhaka";

    //int l= strlen(a);
    //printf("Length of your string is: %d\n",l);

    //strcpy(a,b);
    //printf("Value of a is: %s\n",a);
    //printf("Value of b is: %s\n",b);

    /*int x = strcmp(a,b);
    if(x==0){
        printf("a and b is equal.\n");
    }else{
        printf("a and b is not equal.\n");
    }*/
    strcat(a,b);
    printf("value of a is: %s\n",a);
    printf("value of b is: %s\n",b);


return 0;
}

