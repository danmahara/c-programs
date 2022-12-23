#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    
    int b[100];
    srand(time(NULL));
    int i;
int n;
printf("Enter how many random numbers you want:\n");
scanf("%d",&n);

for(i=0;i<n;i++){

    b[i]=rand()%100;
    // printf("%d \n",b[i]);  WE CAN ALSO USE PRINT FUNCTION IN THIS SECTION
}


printf("Your all %d random numbers are below:\n",n);
for(i=0;i<n;i++)
{
    printf("%d\n",b[i]);
}


return 0;
}