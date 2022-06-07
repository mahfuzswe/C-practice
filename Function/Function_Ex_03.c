// write a function that prints Namaste if user is Indian and Bonjour if the user is Freanch

#include <stdio.h>
void namaste(); // function declearation
void bonjour(); // function declearation

int main()
{
    printf("Enter f for French and i for Indians: ");
    char ch;
    scanf("%c", &ch);

    if (ch == 'i')
    {
        namaste(); // function call
    }
    else
    {
        bonjour(); // function call
    }

    return 0;
}

void namaste() // function defination
{
    printf("Namaste\n");
}

void bonjour() // function defination
{
    printf("Bonjour\n");
}

// otutput:
// Enter f for French and i for Indians: i
// Namaste

// Enter f for French and i for Indians: f
// Bonjour