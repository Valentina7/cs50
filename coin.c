#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change1;

    do
    {
        printf ("Укажите размер сдачи:\n");
        change1 = get_float ();
    }
    while (change1 < 0);

    int change2 = roundf(change1*100);

    int coin = 0;

    while (change2 >= 25)
    {
        change2 = change2-25;
        coin++;
    }

    while (change2 >= 10)
    {
        change2 = change2-10;
        coin++;
    }

    while (change2 >= 5)
    {
        change2 = change2-5;
        coin++;
    }

    while (change2 >= 1)
    {
        change2 = change2-1;
        coin++;
    }

    printf("%i\n", coin);
}