#include<stdio.h>

int main()
{
    char str[50];   // char array of size 50
    printf("\n\nProgram to use gets() function\n\n");

    printf("Enter your complete name:\n\n\n");
    gets(str);
    printf("\n\nWelcome to C Programming  %s\n\n\n", str);
    return 0;
}
