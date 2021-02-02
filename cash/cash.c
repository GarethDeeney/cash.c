#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Creates Variable owedMoney
    float owedMoney;
    int cents;
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    int totalCoins = 0;
    // Checks that amount given by User is not a negative number
    do
    {
        owedMoney = get_float("Owed Amount: ");
    }
    while (owedMoney < 0);

    // Prints the owed Amount - Test
    //printf("%.2f\n",owedMoney);

    // Multiplies owedMoney by 100 to convert into cents, then is saved as an int to avoid float errors.
    cents = round(owedMoney * 100);
    // Test to see correct int figure is passed.
    //printf("%i cents \n", cents);

    //  While loop for when cents is more than each coin, subtracts it until it is less, adding 1 to that coins variable.

    while (cents >= quarter)
    {
        cents = cents - quarter;
        quarters ++;
    }

    while (cents >= dime)
    {
        cents = cents - dime;
        dimes ++;
    }

    while (cents >= nickel)
    {
        cents = cents - nickel;
        nickels ++;
    }

    while (cents >= penny)
    {
        cents = cents - penny;
        pennies ++;
    }

    // Test- checks correct amount of each coin has passed.
    //printf("%i quarters, %i dimes, %i nickels, %i pennies \n", quarters, dimes, nickels, pennies
    // Adds all coins
    totalCoins = quarters + dimes + nickels + pennies;
    //Prints result
    printf("%i\n", totalCoins);
}
