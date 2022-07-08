
#include<stdio.h>
float add(float a, float b){
    return a+b;
}
float subtract(float a, float b){
    return a-b;
}
float multiply(float a, float b){
    return a*b;
}
float devide(float a, float b){
    return a/b;
}




int main(){
    float a,b;
    printf("Enter the value of a and b: \n");
    scanf("%f%f",&a,&b);
    float add_result=add(a,b);
    float subtract_result=subtract(a,b);
    float multiply_result=multiply(a,b);
    float devide_result=devide(a,b);

    printf("Add: %.2f\n",add_result);
    printf("Sub: %.2f\n",subtract_result);
    printf("Mul: %.2f\n",multiply_result);
    printf("Div: %.2f\n",devide_result);


return 0;
}
