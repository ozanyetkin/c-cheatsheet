#include <stdio.h>

int main()
{

    int evens[] = {2, 4, 6, 8, 10, 12};
    int odds[] = {1, 4, 5, 7, 10, 11}; // Do not modify this line.

    printf("%i\n", evens[5]); // -1 won't work, forget your easy life in other langs.

    printf("%i\n", evens[2]);

    odds[1] = 3;
    odds[4] = 9;
}