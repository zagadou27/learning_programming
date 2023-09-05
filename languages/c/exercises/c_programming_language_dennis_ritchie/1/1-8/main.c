#include <stdio.h>

/* cuenta las lineas de la entrada, tabulaciones y espacios en blanco */
int main() 
{
    int character, new_line, tabulator, white_space;

    new_line, tabulator, white_space = 0;
    while((character = getchar()) != EOF) 
    {
        if(character == '\n') 
        {
            ++new_line;
        }
        if(character == '\t')
        {
            ++tabulator;
        }
        if(character == ' ')
        {
            ++white_space;
        }
    }
    printf("Number of nl: %d\nNumber of tab: %d\nNumber of ws: %d\n", new_line, tabulator, white_space);

    return 0;
}