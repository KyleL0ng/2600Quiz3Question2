#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <time.h>

int main(int argc, char *argv[])
{
    // set up needed variables
    char *eptr;
    double taxPercent = strtod(argv[1], &eptr);
    double tipPercent = strtod(argv[2], &eptr);
    double mealCost = 0;
    double tipCost = 0;
    double taxCost = 0;
    double totalCost = 0;

    // pick random meal cost
    time_t t;
    srand((unsigned)time(&t));
    int menuChoice = rand() % 4; // gets random choice from the computer

    switch (menuChoice)
    {
    case 0:
        mealCost = 9.95;
        break;
    case 1:
        mealCost = 4.55;
        break;
    case 2:
        mealCost = 13.25;
        break;
    case 3:
        mealCost = 22.35;
        break;
    } // end switch

    // compute tax and tip for the meal price
    tipCost = mealCost * tipPercent;
    taxCost = mealCost * taxPercent;

    // compute total price for the bill
    totalCost = mealCost + tipCost + taxCost;

    // print the meal cost, tax amount, tip amount, and total
    printf("The meal costs %f\n", mealCost);
    printf("The tax costs %f\n", taxCost);
    printf("The tip costs %f\n", tipCost);
    printf("The bill's total comes out to: %f", totalCost);

    return EXIT_SUCCESS;
}