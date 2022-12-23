

#include<stdio.h>

int main()
{
    char ch;
    int a;
    char chr='y';
    do
    {
          printf("Enter the any character: \t");
    scanf("%c",&ch);
    a=ch;
    printf("THe value is %d",a); 
    printf("\n Do you want to continue \t");
    scanf("%c",&chr);
    } while (chr=='y');
    
 
    
    return 0;
}



