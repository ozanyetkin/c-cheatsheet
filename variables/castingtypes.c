#include <stdio.h>

int main()
{

    double testScore = 95.7;
    int displayScore = 0;

    // displayScore = testScore;
    displayScore = (int)testScore;
    // No need to change below here
    printf("Great work, you got a %d%% on your test\n", displayScore);

    char targetChar;
    int sourceInt = 99;
    double sourceDouble = 55.67;

    // Cast here
    targetChar = (char)sourceInt;
    targetChar = sourceDouble;

    // No need to change below here
    printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);
}