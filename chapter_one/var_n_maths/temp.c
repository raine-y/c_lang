#include <stdio.h>

#define STEP 20; // symbolic constant

int main()
{
    float fahr, celsius;
    int lower, upper;

    lower = 0;
    upper = 300;

    fahr = lower;
    printf("|* ~~~~~~~~~~~~~~~~~~~~~~~ *|\n"); // K&R Exercise 1-3
    printf("|*  Fahrenheit to Celsius  *|\n");
    printf("|* ~~~~~~~~~~~~~~~~~~~~~~~ *|\n");
    while (fahr <= upper)
    {
        celsius = (fahr - 32) * (5.0 / 9.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
}