#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char c;
	
	FILE *file;

file=fopen("text.txt","r");
	while(1)
	{
		if(file==NULL)
		{
			printf("File is not found: \n");
			return (-1);
		}
	
//	printf("File is opened successfully:");
	else
	{
c=fgetc(file);
if(c==EOF)
{
	break;
}
printf("%c",c);
}
}
	
	
	return 0;
}
