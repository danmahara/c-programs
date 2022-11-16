#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int a;
int b[1000],i;
printf("\n\t========================================================================\t\t\n");
printf("\n\t\t Enter the number you want to generate random number till:\n");
printf("\n\t========================================================================\t\t\n");

scanf("%d",&a);

if(a<=0){
    printf("Invalid Input:");
    return -1;                  // if user gives input 0 then program will be exit
}



for(i=0;i<=a;i++){
    b[i]=rand();
}

printf("Your all random numbers are here:\n");
for(i=0;i<=a;i++)
printf("%d \n",b[i]);

    return 0;
}