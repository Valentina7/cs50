#include <stdio.h>

int main(void)
{
    printf("Start!\n");

    int i;
    for (i = 0; i < 3; i++)
    {
        printf("hello %i \n", i);
    }

    printf("End: %i \n", i);
}