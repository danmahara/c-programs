#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    int choose;
    printf("\033[0;31m \n*****************WELCOME TO STONE, PAPER, SCISSOR GAME*****************\n");
    printf("\033[0;34m \n\t\tPlayers choose your Option \n");
    printf("\033[0;36m1. Stone\n2. Paper\n3. Scissor\n");

    int player1, player2;

    // For player first
    printf("\033[0;35mPlayer1: Choose your option:\t");
    scanf("%d", &player1);

    if (player1 <= 0)
    {
        printf("\033[0;33m Invalid Input!");
        exit(1);
    }

    if (player1 >= 4)
    {
        printf("Invalid Input!");
        exit(1);
    }

    if (player1 == 1)
    {
        printf("You choose Stone!\n\n");
    }

    else if (player1 == 2)
    {
        printf("You Choose Paper!\n\n");
    }

    else if (player1 == 3)
    {
        printf("You choose Scissor!\n\n");
    }

    // For player Second
    printf("\033[0;33m Player2: Choose your option:\t");
    scanf("%d", &player2);

    if (player2 <= 0)
    {
        printf("Invalid Input!");
        exit(1);
    }

    if (player2 >= 4)
    {
        printf("Invalid Input!");
        exit(1);
    }

    if (player2 == 1)
    {
        printf("You choose Stone!\n\n");
    }

    else if (player2 == 2)
    {
        printf("You Choose Paper!\n\n");
    }
    else if (player2 == 3)
    {
        printf("You Choose Scissor!\n\n");
    }

    printf("\033[0;32mGame Result:\n");

    if (player1 == 1 && player2 == 2)
    {
        printf("Congratulations Player 2 wins!!\n\n");
    }
    else if (player1 == 2 && player2 == 1)
    {
        printf("Congratulations Player 1 wins!!\n\n");
    }

    else if (player1 == 1 && player2 == 3)
    {
        printf("Congratulations Player 1 wins!!\n\n");
    }
    else if (player1 == 3 && player2 == 1)
    {
        printf("Congratulations Player 2 wins!!\n\n");
    }

    if (player1 == 2 && player2 == 3)
    {
        printf("Congratulations Player 2 wins!!\n\n");
    }
    else if (player1 == 3 && player2 == 2)
    {
        printf("Congratulations Player 2 wins!!\n\n");
    }

    // Draw condition

    if (player1 == 2 && player2 == 2)
    {
        printf("Draw !!\n\n");
    }
    else if (player1 == 1 && player2 == 1)
    {
        printf("Draw !!\n\n");
    }
    else if (player1 == 3 && player2 == 3)
    {
        printf("Draw !!\n\n");
    }

    return 0;
}