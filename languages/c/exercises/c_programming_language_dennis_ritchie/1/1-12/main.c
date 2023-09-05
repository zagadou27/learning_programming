#include <stdio.h>

#define IN 1
#define OUT 0

/* imprime la entrada una palabra por linea */
int main()
{
    int c, resort, state;

    state = OUT;
    while((c = getchar()) != EOF)
    {
        resort = c;
        while(resort != ' ' && resort != '\n' && resort != '\t')
        {
            state = IN;
            putchar(resort);
            resort = getchar();
        }
        if(state == IN)
        {
            putchar('\n');
        }
        state = OUT;
    }

    return 0;
}