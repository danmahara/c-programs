#include<stdio.h>
int sumOfTwoNumber(int number1, int number2){               //sumOfTwoNumber is the function
    int sum=number1+number2;
    return sum;             //this return statement is the last statement of function
}

int main(){

int result = sumOfTwoNumber(5,6);  //what happened under function is stored in result variable 
printf("The sum  is %d",result);             //value of sum is stored in result variable



    return 0;
}