#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

int a,b;
int c , d;
srand(time(NULL));          //it helps to printf distinct random number every time

a=rand();
b=rand();

c=rand()%1000;      //used to print below 1000 or 4 digit 
d=rand()%100;       //used to print below 100 or 2 digit 

printf("first random number is %d \n",a);   
printf("Second random number is %d \n",b);

printf("Third random number is %d \n",c);   
printf("Fourth random number is %d \n",d);

    return 1;
}