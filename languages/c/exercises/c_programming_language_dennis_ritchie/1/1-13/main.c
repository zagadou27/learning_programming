#include <stdio.h>

#define CLEAN 0

int main()
{
    int character, length_counter[10], word_length, most_same_length, i, j;

    word_length = most_same_length = 0;

    for(i = 0 ; i < 10 ; ++i)
        length_counter[i] = CLEAN;

    while((character = getchar()) != EOF)
    {
        if(character == ' ' || character == '\n' || character == '\t')
        {
            if(word_length >= 1 && word_length <= 9)
            {
                ++ length_counter[word_length - 1];
                word_length = CLEAN;
            }
            if(word_length > 9)
            {
                ++ length_counter[9];
                word_length = CLEAN;
            }
        }
        else 
        {
            ++ word_length;
        }
    }

    printf("\n* *  h o r i z o n t a l  h i s t o g r a m  * *\n\n");

    for(i = 0 ; i < 10 ; ++ i)
    {
        j = 0;
        if(i == 9) 
            printf("%2d+:", i + 1);
        else
            printf("%2d:", i + 1);

        while(length_counter[i] != j)
        {
            printf(" -");
            j++;
        }
        printf("\n");
        if(length_counter[i] > most_same_length)
            most_same_length = length_counter[i];
    }

    printf("\n* *  v e r t i c a l  h i s t o g r a m  * *\n\n");

    while(most_same_length > 0)
    {
        for(i = 0 ; i < 10 ; ++ i)
        {
            if(length_counter[i] == most_same_length)
            {
                printf("|\t");
                -- length_counter[i];
            }
            else
                printf("\t");
        }
        -- most_same_length;
        printf("\n");
    }

    for(i = 0 ; i < 9 ; ++ i)
    {
        if(length_counter[i] == most_same_length)
        {
            printf("%d\t", i + 1);
        }
    }
    printf("10+");

    return 0;
}