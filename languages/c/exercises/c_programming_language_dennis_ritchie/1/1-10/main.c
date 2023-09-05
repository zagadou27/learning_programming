#include <stdio.h>

/* copiar entrada en salida, reemplazar tab por \t, retroceso por \b, diagonal invertida por \\ */
int main()
{
    int character, next_character;

    while ((character = getchar()) != EOF)
    {
        next_character = character;
        do
        {
            if(next_character == '\t')
            {   
                printf("\\t");
            }
            else if(next_character == '\b')
            {
                printf("\\b");
            }
            else if(next_character == '\\')
            {
                printf("\\\\");
            } 
            else 
            {
                putchar(next_character);
            }
        } while((next_character = getchar()) != '\n');
        printf("\n");
    }
    
    return 0;
}