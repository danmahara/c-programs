#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct user
{
    char phone[50];
    char ac[50];
    char password[50];
    float balance;
};

int main()
{
    struct user usr;

    int choice;

    printf("What do you want to do:\n");

    printf("1. Create new account:\n");
    printf("2. Log In to an account:\t");
    scanf("%d", &choice);

    if (choice == 1)
    {
        system("cls");
        printf("\nTo creating new account :\nEnter following details:\n");

        printf("\nEnter you Account number:\t");
        scanf("%s", usr.ac);

        printf("\nEnter your phone number:\t");
        scanf("%s", usr.phone);

        printf("\nEnter your new password:\t");
        printf("%s", usr.password);
        usr.balance=0;

        return 0;
    }