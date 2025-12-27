#include <stdio.h>

int main()
{
    /* Input to Output first ver.
    int c;

    c = getchar();
    while (c != EOF) // WHILE (CHAR + IS NOT EQUAL TO + END OF FILE)
    {
        putchar(c); // OUTPUT CHAR
        c = getchar(); // READ NEW CHAR
    }
    */
    // Input to Output second ver.
    int c;

    if ((getchar() != EOF) == 0) // K&R Exercise 1-6
    {
        printf("(getchar() != EOF) == 0 \n");
    }
    else if ((getchar() != EOF) == 1)
    {
        printf("(getchar() != EOF) == 1 \n");
    }

    while ((c = getchar()) != EOF) // PARENTHESES NEEDED FOR ASSIGNMENT
    {
        printf("%s%d", "EOF = ", EOF); // K&R Exercise 1-7
        putchar(c);
        break;
    }
}