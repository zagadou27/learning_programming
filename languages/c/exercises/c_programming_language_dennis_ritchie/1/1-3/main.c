#include <stdio.h>

/*Imprime la tabla Fahrenheit - Celcius*/
main()
{
    float fahr, celc;
    int lower, upper, step;

    lower = 0;
    upper = 300; 
    step = 20;

    fahr = lower;
    printf("%3s %6s\n", "Fahr", "Celc");
    while(fahr <= upper)
    {
        celc = (5.0/9.0) * (fahr - 32.0);
        printf("%4.0f %6.1f\n", fahr, celc);
        fahr = fahr + step;
    }
}