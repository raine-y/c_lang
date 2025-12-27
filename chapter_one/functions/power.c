#include <stdio.h>

int power(int base, int n); // Func declaration 

int main() // Main method
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    return 0;  // Returns to caller env

}

int power(int base, int n) // Func definition
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}