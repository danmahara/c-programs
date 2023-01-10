#include<stdio.h>
#include<conio.h>
void main()
{
    int x = 10, y = 15, temp;
    printf("\n\nProgram of Swapping two numbers in C Language");

    printf("\n\nBefore swapping value is x=10 and y=15\n\n");
    temp = x;
    x = y;
    y = temp;
    printf("After swapping is x = %d and y = %d\n\n", x, y);
    getch();
}
