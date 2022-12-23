#include <stdio.h>
// #include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{

 char a[50][70]={"5","dan","5"};

for(int i=0;i<3;i++){
    for (int j = 0; j< i; i++)
    {

 printf("number is %d %s %s",i,a[i],a[j]);
    }
    
 printf("\n");

}



//   printf("\n%s",a[1]);
    return 0;
}


// write a program to find out the largest among three numbers

// #include <stdio.h>
// #include<time.h>
// #include<stdlib.h>
// int main()
// {
//     srand(time(NULL));
//     printf("\n\nThree numbers will generate computer \n\n");

//     int a=rand()%100;
//     printf("\nFirst number is %d",a);

//     int b=rand()%100;
//     printf("\nSecond number is %d",b);

//     int c=rand()%100;
//     printf("\nThird number is %d\n\n",c);


//     if (a > b && a > c)
//     {
//         printf("\n %d is grater!",a);
//     }
//     else if (b > a && b > c)
//     {
//         printf("%d is grater !",b);
//     }
//     else
//     {
//         printf("%d is grater ",c);
//     }
//     return 0;
// }