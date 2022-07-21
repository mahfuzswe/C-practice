#include<stdio.h>

int main()
{
    double cgpa=3.70;
    double *ptr;
    ptr=&cgpa;

    printf("cgpa: %lf\n",cgpa);

    printf("cgpa: %lf\n",*ptr);


    return 0;
}
