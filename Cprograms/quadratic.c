/*Program to solve quadratic equation*/
#include<stdio.h>
#include<math.h>
int main(){

float a,b,c;   //for taking coefficient 
float root1,root2;      //for root
float determinant; 

printf("Enter the cofficient for a,b,c:  \t(where a!=0)\n");
scanf("%f%f%f",&a,&b,&c);
determinant=b*b-(4*a*c);             //calculate determinant
if(determinant>0)
{
   printf("Roots are real and distinct;\n");
   root1=-b+sqrt(determinant)/2*a;
    root2=-b-sqrt(determinant)/2*a;
    printf("Roots are %f and %f \n",root1,root2);
}

if(determinant==0){
    printf("Roots are real and equal:\n");
    root1=-b/2*a;
      root2=-b/2*a;
    printf("Roots are %f and %f \n",root1,root2);
}
if(determinant<0)
{

    printf("Roots are imaginary or unequal");
}

    return 0;
}