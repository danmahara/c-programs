//Dynamic memory allocation using function Malloc

#include<stdio.h>
// #include<conio.h>
#include<stdlib.h>
int main(){

int i;
int *ptr;

printf("Enter the number of array:\n");
int n;
scanf("%d",&n);

ptr=(int *)malloc(n*sizeof(int));

for (i=0;i<n;i++){

    printf("Enter your array :\n");
    scanf("%d",&ptr[i]);
}



printf("Your arrays are :\n");
for(i=0;i<n;i++){
    printf("Your array are %d \n",ptr[i]);
}





return 0;

}