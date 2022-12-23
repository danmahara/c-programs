#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
    char name[50];
    char address[50];
    char phone[50];
    char email[50];
};

int main()
{
    struct employee emp;

    char filename[50];

    FILE *fptr;

    printf("Enter data accordingly given below:\n");
    printf("\nEnter employee name:\t");
    scanf("%s", emp.name);
    printf("\nEnter employee Address  :\t");
    scanf("%s", emp.address);
    printf("\nEnter employee phone:\t");
    scanf("%s", emp.phone);
    printf("\nEnter employee email:\t");
    scanf("%s", emp.email);

    strcpy(filename, emp.phone);
 
    fptr = fopen(strcat(filename, ".data"), "w");

    fwrite(&emp,sizeof(struct employee ),1,fptr);


    if(fwrite!=0){
        printf("Data entered successfully!\n");
    }
    else {
        printf("something went wrong!\n");
    }
    fclose(fptr);

    return 0;
}