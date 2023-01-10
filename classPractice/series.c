#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int number;
int sum=0;
int num;
    printf("Enter the number you want to find series:\n");
    scanf("%d", &num);

for (int i = 1; i < num; i++)
{
   printf("Enter first number:\n");
   scanf("%d",&number); 
}
printf("Seires is \n");
for (int i = 1; i <number; i++)
{
    sum=number+i;

}
    printf(" = %d\n",sum);


    return 0;
}