#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float fahr,celsius;
    int lower,upper,step;

    printf ("Конвертация из Фаренгейта в градусы\n");
    lower = -10;
    upper = 150;
    step = 10;
    celsius = lower;

    while (celsius<=upper)
    {
        fahr = celsius*1.8+32;
        printf ("%4.1f\t%5.1f\n",fahr,celsius);
        celsius=celsius+step;
    }

    printf ("Укажите значение по Цельсию\n");
    celsius = get_float ();

    fahr = celsius*1.8+32;
    printf ("Ваше значение по Фаренгейту: %4.1f\n",fahr);
}