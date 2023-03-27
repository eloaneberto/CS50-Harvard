#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float dollar;
    do
    {
    dollar = get_float ("Value: ");
    }
    while (dollar <= 0);
    
    int cents = round(dollar*100);
    int coins = 0;
    
    while (cents >= 25)
    {
        cents = cents - 25;
        coins++;
    }
    
    while (cents >= 10)
    {
        cents = cents - 10;
        coins++;
    }

    while (cents >= 5)
    {
        cents = cents - 5;
        coins++;
    }

    while (cents >= 1)
    {
        cents = cents - 1;
        coins++;
    }
    
    printf("You will need %i coins\n", coins);
}