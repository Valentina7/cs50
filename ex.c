#include <stdio.h>
#include <cs50.h>
int main(void){
    float count;
    do{
        count = get_float ("O hai! How much change is owed? ");
    }
    while (count < 0);
    int change = (count*100);
    int coins = 0;
    while (change >= 25)
    {
        change = change - 25;
        coins = coins + 1;
    }
    while (change >= 10)
    {
        change = change - 10;
        coins = coins + 1;
    }
   while (change >= 5)
   {
        change = change - 5;
        coins = coins + 1;
   }
   while (change >= 1)
   {
        change = change - 1;
        coins = coins + 1;
   }

    printf ("%i\n", coins);
}

