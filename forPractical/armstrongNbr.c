#include <stdio.h>
#include <math.h>
int main()
{
    int n, sum, i, t, a;
    printf("\n\nProgram to find number between 1 to 500\n\n");
    printf("\nThe Armstrong numbers in between 1 to 500 are : \n\n");

    for (i = 1; i <= 500; i++)
    {
        t = i; // as we need to retain the original number
        sum = 0;
        while (t != 0)
        {
            a = t % 10;
            sum += a * a * a;
            t = t / 10;
        }
        if (sum == i)
            printf("\n\t\t\t%d", i);
    }
    printf("\n\n");
    return 0;
}
