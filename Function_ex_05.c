#include <stdio.h>
int sum(int a, int b);
void printTable(int n);

int main()
{
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    printTable(n); // argument/actual parameter
    return 0;
}
int sum(int x, int y)
{
    return x + y;
}
void printTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i * n);
    }
}

// output:
// enter number: 5
// 5
// 10
// 15
// 20
// 25
// 30
// 35
// 40
// 45
// 50