#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    int fact = 1;
    int n, i;
    printf("Enter number greater than 0\n");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid Input");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact *= i;
        }
        printf("The factorial of %d is %d", n, fact);
    }

    return 0;
}