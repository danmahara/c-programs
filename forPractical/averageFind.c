#include<stdio.h>
int main()
{
    int n, i;
    float sum = 0, x;

printf("\n\nProgram to find average of N number:\n\n");
    printf("Enter number of elements:\t");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
    printf("\nEnter %d elements \t",i, n);
        scanf("%f", &x);
        sum += x;
    }
    printf("\n\n\nAverage of the entered numbers is =  %f\n\n\n", (sum/n));
    return 0;
}
