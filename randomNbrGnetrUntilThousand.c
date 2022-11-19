#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int a;
int b[100],i;      /*b[100] can store 100 random numbers , if we give input more than 101 
then somem number may be 0s. (we can change it anytime like b[150],b[6] etc.)
                            if user gives input 102 or more than then it won't work
 */

srand(time(NULL));      //used to print distinct random number every time
printf("\n\t========================================================================\t\t\n");
printf("\n\t\t Enter the number you want to generate random number till:\n");
printf("\n\t========================================================================\t\t\n");

scanf("%d",&a);

if(a<=0){
    printf("Invalid Input:");
    return -1;                  // if user gives input 0 then program will be exit
}

else if (a>=102){
    printf("Invalid Input! ");
    return -1;
}

for(i=0;i<=a;i++){
    b[i]=rand() %1000;          //% 1000 is optional
}

printf("Your all random numbers are here:\n");
for(i=0;i<=a;i++)
printf("%d \n",b[i]);



    return 0;
}