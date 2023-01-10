#include<stdio.h>
int main()
{
    int number;
    printf("\n\nBasic if else condition Program\n\n");
    printf("Please enter a number:\n");
    scanf("%d",&number);
    /*
        For single statements we can skip the curly brackets
    */
    if(number < 100)
        printf("Number is less than 100!\n\n");
    else if(number == 100)
        printf("Number is 100!\n\n");
    else
        printf("Number is greater than 100!\n\n");

    return 0;
}
