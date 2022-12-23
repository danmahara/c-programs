//Program to swap two numbers
#include<stdio.h>
#include<conio.h>
int main()
{
	
	int a,b,c;
	printf("Entery any number : \n");
	scanf("%d%d",&a,&b);
	
	printf("The value of a is %d and b is %d befor swapping. \n",a,b);
	
	c=a;
	a=b;
	b=c;
	
	printf("The value of a is %d and b is %d after swapping . \n",a,b);
	
	return 0;
	
}
