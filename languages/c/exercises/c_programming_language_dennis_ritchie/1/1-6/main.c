#include <stdio.h>

/* imprime el valor de c (0 o 1) */
int main()
{
    int c;

    c = getchar() != EOF;
        
    printf("c value is: %d\n", c);

    return 0;
}