#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int cent_owed;

    do
    {
        float owed = get_float("Owed: ");
        cent_owed = round(owed * 100);
    } while (cent_owed < 1);

    int quarters = cent_owed / 25;
    int dimes = (cent_owed % 25) / 10;
    int nickels = ((cent_owed % 25) % 10) / 5;
    int pennies = ((cent_owed % 25) % 10) % 5;

    printf("%d\n", quarters + dimes + nickels + pennies);
}