#include <stdio.h>

// Write a C program that reviews the concepts of arrays.
int main()
{
    // Create an array of integers named `arr` and initialize it with the values:
    // 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
    // 14, 15, 16, 17, 20, 22, 26, 28, 29
    int arr[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
                 14, 15, 16, 17, 20, 22, 26, 28, 29};
    int arr2[100];

    // Loop through the `arr` array and print each element.
    for (int i = 0; i < 20; i++)
    {
        printf("%i\n", arr[i]);
    }

    // Create an array of integers named `arr2` with a size of 100.
    // Loop through the `arr2` array and assign the value of `x + 4` to each element.
    for (int x = 0; x < 100; x++)
    {
        arr2[x] = x + 4;
    }

    // Create an array of integers named `evens` and initialize it with the values:
    // 2, 4, 6, 8, 10, 12
    int evens[] = {2, 4, 6, 8, 10, 12};
    int odds[] = {1, 4, 5, 7, 10, 11}; // Do not modify this line.

    // Print the last element of the `evens` array.
    printf("%i\n", evens[5]);

    // Print the third element of the `evens` array.
    printf("%i\n", evens[2]);

    // Change the second element of the `odds` array to 3.
    odds[1] = 3;

    // Change the fifth element of the `odds` array to 9.
    odds[4] = 9;

    // Create a 2D array named `mat` with 3 rows and 3 columns and initialize it with the values
    // {{2, 9, 11}, {3, 1, 4}, {8, 3, 1}}
    int mat[][3] = {{2, 9, 11}, {3, 1, 4}, {8, 3, 1}};

    // Create a 2D array named `matrix` with 4 rows and 4 columns and initialize it with the values
    // {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}}
    int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}};
    int sum = 0;

    // Print the value at the second row and the first column of the `matrix` array.
    printf("%i\n", matrix[3][1]);

    // Loop through the `matrix` array and calculate the sum of all elements.
    for (int q = 0; q < sizeof(matrix) / sizeof(matrix[0]); q++)
    {
        for (int t = 0; t < sizeof(matrix[0]) / sizeof(int); t++)
        {
            sum += matrix[q][t];
        }
    }

    // Print the sum of all elements in the `matrix` array.
    printf("%i\n", sum);

    // Calculate the number of elements in the `arr` array and print it.
    int len;

    len = sizeof(arr) / sizeof(int);

    printf("%i\n", len);

    // Loop through the `arr` array and print each element.
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("%i\n", arr[i]);
    }

    return 0;
}