#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int a;
int b[1000],i;      /*b[1000] can store 1000 random numbers 
                            (we can change it anytime like b[100],b[6] )
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



for(i=0;i<=a;i++){
    b[i]=rand();
}

printf("Your all random numbers are here:\n");
for(i=0;i<=a;i++)
printf("%d \n",b[i]);

    return 0;
}