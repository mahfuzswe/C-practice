// Read all data from a file.
// Count the consonant, vowels and spaces.

#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("data.txt", "r");
    int c;
    int cCounter = 0, vCounter = 0, sCounter = 0;
    while (1)
    {
        c = fgetc(fp);
        if (c == EOF)
        {
            break;
        }
        if (c == 32 || c == 10)
        { // ASCII value of space is 32 ; ASCII value of newline is 10
            sCounter++;
        }
        else if (c == 'a' || 'e' || 'i' || 'o' || 'u')
        {
            vCounter++;
        }
        else if (c == 'A' || 'E' || 'I' || 'O' || 'U')
        {
            vCounter++;
        }
        else
        {
            cCounter++;
        }
    }
    printf("Vowels: %d\n", vCounter);
    printf("Consonant: %d\n", cCounter);
    printf("Space and newline: %d\n", sCounter);

    return 0;
}
