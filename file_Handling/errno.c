#include<stdio.h>
#include<conio.h>
#include<errno.h>
#include<stdlib.h>
int main()
{
	
FILE *fpointer;

fpointer =fopen("DataFlair.txt","r");

printf("The value of errono is %d \n",errno);
	
	return 0;
}
