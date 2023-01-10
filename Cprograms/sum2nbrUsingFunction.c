#include<stdio.h>
#include<math.h>
int sumOfTwoNumber(int number1 , int number2);

int main()
{
    int a,b,sum;

    printf("Enter the two number:\n");
    scanf("%d%d",&a,&b);
    sum=sumOfTwoNumber(a,b);
    printf("The sum is %d:\n",sum);
 

    return 0;
}
int sumOfTwoNumber(int number1, int number2)
{
int result;
result=number1+number2;
return result;
}