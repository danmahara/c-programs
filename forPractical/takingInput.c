#include <stdio.h>
int main()
{
    int num1, num2;
    float fraction;
    char character;
printf("\n\nProgram to take input of various datatypes in C\n");
    printf("\n\nEnter a Character\n");
    scanf("%c", &character);
    printf("\nThe character that you have entered is %c", character);

    printf("\n\nEnter two numbers number\n");

    // Taking integer as input from user
    scanf("%d%d", &num1, &num2);
    printf("\nThe two numbers You have entered are %d and %d\n\n", num1, num2);

    printf("\n\nEnter a Decimal number\n");
    scanf("%f", &fraction);
    printf("\nThe float or fraction that you have entered is %f\n\n", fraction);

    return 0;
}
