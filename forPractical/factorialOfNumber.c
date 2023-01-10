#include<stdio.h>
void main()
{
   int i, n;
    long long int fact = 1;
   printf("\n\nProgram to find Factorial of a Number using for loop\n\n");
   printf("Enter the number: ");
   scanf("%d" , &n);
   for(i = 1; i <= n; i++)
   {
       fact = fact * i;
   }
   printf("Factorial of %d is %lld \n\n", n , fact);
}
