#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int a, b, c, s = 0;
printf("\n\nProgram to check given number is palindrome or not:\n\n");
    printf("Enter a number:\t");
    scanf("%d", &a);
    c = a;
   // the number is reversed inside the while loop.
   while(a > 0)
   {
      b = a%10;
      s = (s*10)+b;
      a = a/10;
   }
   // here the reversed number is compared with the given number.
   if(s == c)
   {
      printf("The number %d is a palindrome\n\n\n", c);
   }
   else
   {
      printf("The number %d is not a palindrome\n\n\n", c);
   }
  getch();
}
