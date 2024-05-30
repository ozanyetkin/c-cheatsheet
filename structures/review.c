// Write a C program that reviews the concepts of structures.
#include <stdio.h>

struct Car
{
    char make[25];
    char model[25];
    char color[25];
    int year;
};

struct Car paintCar(struct Car car, char newColor[25])
{
    for (int i = 0; i < 25; i++)
    {
        car.color[i] = newColor[i];
    }
    return car;
}

int main(void)
{
    struct Car car1 = {"Toyota", "Corolla", "Red", 2015};
    struct Car car2 = {"Ford", "Fusion", "Blue", 2018};

    car1 = paintCar(car1, "Black");
    car2 = paintCar(car2, "White");

    printf("The %d %s %s is %s.\n", car1.year, car1.color, car1.make, car1.model);
    printf("The %d %s %s is %s.\n", car2.year, car2.color, car2.make, car2.model);
}