// Sum of first n natural numbers

// n--> 1+2+3+4+.......n-1+n = sum(n-1)+n

// n=5--> 1+2+3+4+5=sum(4)+5
// n=4--> 1+2+3+4=sum(3)+4
// n=3--> 1+2+3=sum(2)+3
// n=2--> 1+2=sum of(n-1)+2
// n=1--> 1 <---last value(Base value)

// sum(5)=15                         n .
//     ^...............                .
// sum(4)+5=10+5=15...|                .
//     ^...............                .
// sum(3)+4=6+4=10....|                .  Recursion Tree
//     ^...............                .
// sum(2)+3=3+3=6.....|                .
//     ^...............                .
// sum(1)+2=1+2=3.....|                v
//   ^
// Base case

#include <stdio.h>
int sum(int n);
int main()
{
    printf("sum is: %d", sum(5));
}
// recursive function
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int sumNm = sum(n - 1); // sum of 1 to n
    int sumN = sumNm + n;   // sum(n)=sum(n-1)+n
    return sumN;
}

// output:
// sum is: 15