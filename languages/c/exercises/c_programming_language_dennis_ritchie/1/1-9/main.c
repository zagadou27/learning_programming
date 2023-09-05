#include <stdio.h>

/* copia la entrada en la salida, reemplazando cada cadena de uno o más blancos por un solo blanco */
int main()
{
    int character, next_character;

    while((character = getchar()) != EOF)
    {
        if(character != ' ')
        {
            putchar(character);
        }
        else
        {
            while((next_character = getchar()) == ' ')
                ;
            putchar(character);
            putchar(next_character);
        }
    }

    return 0;
}