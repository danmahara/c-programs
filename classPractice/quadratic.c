#include <stdio.h>
#include <math.h>
// #include <ctype.h>
int main()
{
   float a, b, c;
   float discriminant, root1, root2;
   float raealPart, imaginaryPart;

   printf("\nEnter the value for a, b and c: \t(a!=0) \n");
   scanf("%f%f%f", &a, &b, &c);

   // printf("\na=%f \nb=%f \nc=%f \n", a, b, c);
   discriminant = b * b - 4 * a * c;

   if (discriminant > 0)
   {
      printf("\nRoots are real and distinct (unequal)!\n");
      root1 = -b - sqrt(discriminant) / 2 * a;
      root2 = -b + sqrt(discriminant) / 2 * a;
      printf("\nRoots are %f and %f", root1, root2);
   }
   else if (discriminant == 0)
   {
      printf("\nRoots are real and equal!\n");
      root1 = -b / 2 * a;
      root2 = -b / 2 * a;
      printf("\nRoots are %f and %f ", root1, root2);
   }
   else
   {
      printf("\nRoots are imaginary and unequal (different)");
      raealPart = -b / (2 * a);
      imaginaryPart = sqrt(-discriminant) / (2 * a);

      root1 = raealPart + imaginaryPart;
      root2 = raealPart - imaginaryPart;

      // if roots are imaginary then value won't show exact
      printf("\nRoots are %f and %f", root1, root2);
   }

   return 0;
}