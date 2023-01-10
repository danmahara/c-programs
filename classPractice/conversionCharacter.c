#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

         double x=5000.0;
         double y=0.0025;
    printf("%e %e %e",x,x*y,y/y);

    char line[80];
    int cont;
    do
    {
        printf("Enter your name\n");
        scanf("%[^\n]", line);
        printf("%s", line);

    } 


    


    return 0;
}