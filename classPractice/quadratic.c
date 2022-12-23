#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main(){
     float a,b,c;
     float determinant;
     float root1,root2;

printf("Enter the value for a, b and c:\n");
scanf("%f%f%f",&a,&b,&c);

determinant=b*b-4*a*c;


if(determinant>0){
    printf("Roots are real!\n");
root1=-b-sqrt(determinant)/2*a;
root2=-b+sqrt(determinant)/2*a;
printf("Roots are %f and %f",root1,root2);
}
 else if (determinant==0){
    printf("Roots are real and equal!\n");
    root1=-b/2*a;
    root2=-b/2*a;
    printf("Roots are %f and %f ",root1,root2);
 }
 else{
    printf("Roots are imaginary and different");
 }


return 0;
}