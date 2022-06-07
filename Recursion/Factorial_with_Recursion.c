// Factorial of n    |       fact(n)=fact(n-1)*n

// 5!=1*2*3*4*5------>4!*5
// 4!=1*2*3*4-------->3!*4
// 3!=1*2*3---------->2!*3
// 2!=1*2------------>1!*2
// 1!=1-------------->1
// |----->Base Case

// fact(5)=120
//     ^............
// fact(4)*5=120...|
//     ^............
// fact(3)*4=24....|
//     ^............
// fact(2)*3=6.....|
//     ^............
// fact(1)*2=2.....|
//     ^............
// fact(0)*1=1.....|
//   ^
// Base case

#include <stdio.h>
int fact(int n);

int main()
{
    printf("factorial is: %d\n", fact(5));
    return 0;
}
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int factNm1 = fact(n - 1);
    int factN = factNm1 * n;
    return factN;
}

// output:
// factorial is: 120