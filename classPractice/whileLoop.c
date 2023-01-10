#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
      int num,sum=0,rem;
printf("Enter the number:\n");
scanf("%d",&num);

int a=num;
while(num>0){

rem=num%10;
sum+=rem;
num/=10;

}
printf("Sum of %d = %d",a,sum);

return 0;
}