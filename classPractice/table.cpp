#include <stdio.h>
#include <stdlib.h>
int main()
{

     int i, j, k;
     // for( i=1;i<=10;i++){
     //              k=i*5;
     // printf("5 * %d = %d\n",i,k);
     //         }
     //         printf("\n");

     for (i=1;i <= 5; i++)
     {
          for (j = 1; j < i; j++)
          {
               printf("*");
          }
          printf("\n");
     }

   for (i=1;i <= 6; i++)
     {
          for (j = 1; j < i; j++)
          {
               printf("*");
          }
          printf("\n");
     }


   for (i=1;i <= 5; i++)
          {
               //   for (j = 1; j < i; j++){

               printf("*\n");
                 }
          // printf("\n");
          // }
     

     return 0;
}