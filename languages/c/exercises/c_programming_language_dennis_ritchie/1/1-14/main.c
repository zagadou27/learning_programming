#include <stdio.h>

#define ASCII_NUMBERS 256

int main()
{
    int character, ascii_frequency[ASCII_NUMBERS], i, j;

    for(i = 0 ; i < ASCII_NUMBERS ; ++ i)
        ascii_frequency[i] = 0;

    while((character = getchar()) != EOF)
    {
        ++ ascii_frequency[character];
    }

    for(i = 0 ; i < ASCII_NUMBERS ; ++ i)
    {
        j = 0;
        if(ascii_frequency[i] != 0)
        {
            putchar(i);
            putchar(':');
            putchar(' ');
            while(j < ascii_frequency[i])
            {
                putchar('*');
                j++;
            }
            putchar('\n');
        }
    }
}