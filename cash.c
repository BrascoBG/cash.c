#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int intQuarter;
    int intDime;
    int intNickel;
    int intPenny;
    int changeOutput = 0;

    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);
    int cents = round(dollars * 100);
    for (intQuarter = 1; cents >= 25; intQuarter++)
    {
        cents -= 25;
        changeOutput += 1;
    }
    for (intDime = 1; cents >= 10; intDime++)
    {
        cents -= 10;
        changeOutput += 1;
    }
    for (intNickel = 1; cents >= 5; intNickel++)
    {
        cents -= 5;
        changeOutput += 1;
    }
    for (intPenny = 1; cents >= 1; intPenny++)
    {
        cents -= 1;
        changeOutput += 1;
    }
    printf("%i\n", changeOutput);


}
