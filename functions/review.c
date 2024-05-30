#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Write a C program that reviews the concepts of functions
int getRandomNumber(int maxNumber)
{
    int randomNumber = rand() % maxNumber + 1;
    return randomNumber;
}

void repeatDigit(int repetitions)
{
    int digit = getRandomNumber(9);
    for (int i = 0; i < repetitions; i++)
    {
        printf("%d ", digit);
    }
    printf("\n");
}

void incrementAge(int *agePointer)
{
    *agePointer += 1;
}

int getRandom1000()
{
    int random1000 = rand() % 1000 + 1;
    return random1000;
}

int main(void)
{
    srand(time(NULL));
    int repetitions = getRandomNumber(10);
    repeatDigit(repetitions);

    int age = 42;
    incrementAge(&age);
    printf("%d\n", age);

    int randomNumber = getRandomNumber(100);
    printf("My random number is: %d\n", randomNumber);

    int random1000 = getRandom1000();
    printf("My random number is: %d\n", random1000);
}