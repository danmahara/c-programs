#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *ptr;
    int n;
    int i;
    printf("Enter the size of arrya:\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    for (i = 0; i < n; i++)
    {
        printf("Enter arrays :\n");
        scanf("%d", &ptr[i]);
    }

    printf("Arrays are :\n");
    for (i = 0; i < n; i++)
    {
        printf("You arrarys are %d \n", ptr[i]);
    }
    return 0;
}