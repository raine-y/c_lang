#include <stdio.h>

int main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ; // C requires a body ~ so NULL statement.
    printf("%.0f\n", nc);
}

// YOU GOTTA HIT ENTER & CNTRL + D. [CNTRL + Z ON WINDOWS]