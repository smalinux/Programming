#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("%i\n", (12 & 10));
    printf("%i\n", (12 | 10));
    printf("%i\n", (12 ^ 10));
    printf("%i\n", (12 << 2));
    printf("%i\n", (12 >> 2));
    printf("%i\n", (~12));
    printf("%i\n", (!12));

    printf("%i\n", (1^0^1^0^1));        // To get 1, must be ODD number of 1s. ones = 3 (odd)
    printf("%i\n", (1^0^1^0^0));        // ones = 2 (even)





    return 0;
}
