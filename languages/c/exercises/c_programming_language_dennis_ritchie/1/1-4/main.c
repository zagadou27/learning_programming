#include <stdio.h>

/*Imprime la tabla Celcius - Fahrenheit*/
main()
{
    float celc, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celc = lower;
    printf("%3s %6s\n", "Celc", "Fahr");
    while (celc <= upper)
    {
        fahr = (celc * 9.0/5.0) + 32.0;
        printf("%4.0f %6.1f\n", celc, fahr);
        celc = celc + step;
    }
}