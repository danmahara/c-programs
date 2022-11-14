#include<stdio.h>
#include<conio.h>
 int main()
{
    int fahr, celsius;
    int lower, upper, step;
    lower=0;
    upper=300;
    step=20;
    
    fahr=lower;
    while(fahr<=lower)
{
    celsius=5*(fahr-32)/9;
    printf("\n Fahrenheit is %d\n Celsius is %d\n ",fahr,celsius);
    fahr=fahr+step;
}


  
}