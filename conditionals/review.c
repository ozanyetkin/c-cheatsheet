#include <stdio.h>

// Write a program to review the concepts of conditionals in C.

int main()
{

    // Declare a variable named temperature of type double and assign it a value of 75.0.
    double temperature = 75.0;

    // Declare a variable named isSummer of type int and assign it a value of 1.
    int isSummer = 1;

    // Declare a variable named isWeekend of type int and assign it a value of 1.
    int isWeekend = 1;

    // Start the if, else if, else here:
    // If the temperature is greater than 80, print "It's hot!".
    if (temperature > 80)
    {
        printf("It's hot!\n");
    }
    // Else if it's summer and the temperature is greater than 60, print "It's warm!".
    else if (isSummer == 1 && temperature > 60)
    {
        printf("It's warm!\n");
    }
    // Else if it's the weekend and the temperature is greater than 60, print "It's warm!".
    else if (isWeekend == 1 && temperature > 60)
    {
        printf("It's warm!\n");
    }
    // Else print "It's cool!".
    else
    {
        printf("It's cool!\n");
    }

    return 0;
}