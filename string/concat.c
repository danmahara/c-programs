// Concat is a function used to combile two string

#include <stdio.h>
#include <string.h>
struct concat
{
    char name[50];
    char address[50];
    char number[50];
};

int main()
{
    struct concat usr;

    FILE *pt;
    char filename[50];

    printf("Enter your name:\t ");
    scanf("%s", usr.name);
    printf("\nEnter your address:\t");
    scanf("%s", usr.address);
    printf("\nENter you number:\t");
    scanf("%s", usr.number);

    strcpy(filename, usr.number);
    // printf("%s",filename);  it print number that you entered

    pt = fopen(strcat(filename, ".data"), "w");

    fwrite(&usr, sizeof(struct concat), 1, pt);
    if (fwrite != 0)
    {
        printf("Added data successfully:\n");
    }
    else
    {
        printf("\nSomething went wrong:");
    }
    fclose(pt);

    return 0;
}