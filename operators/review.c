#include <stdio.h>

// Write a program that reviews the concepts of operators in C.
int main()
{
    /*
    The program should:
    1. Declare two integers x and y and assign them the values 42 and 13 respectively.
    2. Use the logical operator to check if x is not equal to y.
    3. If the condition is true, print "Congratulations on setting up a comparison correctly!".
    4. If the condition is false, print "Please try again!".
    5. Use the order of operations to calculate the following:
    a. x = (2 + 3) * 5
    b. y = 2 / (4 + 6)
    6. Print the values of x and y.
    7. Use the comparison operator to check if x is less than y.
    8. If the condition is true, print "Congratulations on setting up a comparison correctly!".
    9. Finally, increment the value of x and decrement the value of y.
    10. Print the updated values of x and y.
    */

    int x = 42;
    int y = 13;

    if (!(x == y))
    {
        printf("Congratulations on setting up a comparison correctly!\n");
    }
    else
    {
        printf("Please try again!\n");
    }

    x = (2 + 3) * 5;
    y = 2 / (4 + 6);

    printf("x is: %d\n", x);
    printf("y is: %d\n", y);

    if (x < y)
    {
        printf("Congratulations on setting up a comparison correctly!\n");
    }

    x++;
    y--;

    printf("Updated x is: %d\n", x);
    printf("Updated y is: %d\n", y);

    return 0;
}