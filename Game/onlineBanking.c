#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct user
{

    char ac[50];
    char phone[20];
    char password[50];
    float balance;
};
int main()
{
    FILE *fp;
    struct user usr;
    char ch = 'y' || 'Y';
    int choice;

    char filename[50], phone[20], pswrd[50];

    printf("\t \tWelcome to Global IME Mobile Banking System \n");
    printf("What do you want to do:\n\n");
    printf("1. Register an account:\n");
    printf("2. Log in to an account\n\n");
    printf("Enter your choice:\t");
    scanf("%d", &choice);

    if (choice == 1)
    {
        system("cls");

        printf("\nEnter your Bank account number:\t");
        scanf("%s", usr.ac);
        printf("\nEnter your phone number:\t");
        scanf("%s", usr.phone);
        printf("\nEnter you new password:\t");
        scanf("%s", usr.password);
        // printf("\nEner your name:\t");
        // scanf("%s",usr.name);
        usr.balance = 0;

        // Copying fine according to user phone number

        strcpy(filename, usr.phone);
        // strcat function comnine 2 string   filename=usr.phone + .data
        fp = fopen(strcat(filename, ".data"), "w"); // File will be saved eg. 9866520039.data

        fwrite(&usr, sizeof(struct user), 1, fp);
        if (fwrite != 0)
        {
            printf("Account registered successfully:\n");
        }
        else
        {
            printf("\nSomething went wrong:");
        }
        fclose(fp);
    }
    if (choice == 2)
    {
        system("cls");
        printf("Enter you phone number:\t");
        scanf("%s", phone);
        printf("Enter your password:\t");
        scanf("%s", pswrd);
        strcpy(filename, phone);
        fp = fopen(strcat(filename, ".data"), "r");
        if (fp == NULL)
        {
            printf("Phone number is not registered:\n");
        }
        else
        {

            fread(&usr, sizeof(struct user), 1, fp);
            fclose(fp);
            if (!strcmp(pswrd, usr.password))
            {
                printf("Password Matched:");
            }
            else
            {
                printf("Invalid password:");
            }
        }
    }
    return 0;
}