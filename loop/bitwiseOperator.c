// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main(){
// int number = 212,i;

// for ( i = 0; i <=2; ++i)
// {
// printf("\nRight shift by %d : %d",i,number>>i);
// }
// printf("\n");

// for ( i = 0; i <=2; ++i)
// {
//     printf("\nLeft shift be %d: %d",i,number<<i);
// }

// return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    int i;
    float x;
    double d;
    char c;

    printf("integer %d \n", sizeof i);
    printf("float %d \n", sizeof x);
    printf("double %d \n", sizeof d);
    printf("Character %d \n", sizeof c);

    return 0;
}
