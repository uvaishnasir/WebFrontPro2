#include <stdio.h> //UV--13/07/2021-GAME
#include <stdlib.h>
#include <time.h>
void rules()
{
    printf("***Welcome to the Rock, Paper & Scissors***\n");
    printf("Instructions:-\n");
    printf("\t*Your opponent is computer.\n");
    printf("\t*You have only 3 attempts to Win.\n");
    printf("\t*Winner will decide as following.\n");
    printf("\t*Rock vs Scissors--Rock Wins.\n");
    printf("\t*Paper vs Scissors--Scissors Wins.\n");
    printf("\t*Rock vs Paper--Paper Wins.\n");
    printf("***Be Ready to play the game***\n");
}
void main()
{
    char name[20];
    int choice, r, P_score = 0, C_score = 0;
    rules();
    printf("Enter the username of the player 1 without space:\n");
    scanf("%s", name);
    printf("Player 1 is %s & Player 2 is Computer\n", name);
    for (int i = 1; i <= 3; i++)
    {
        printf("It's! Your turn\n");
        printf("Press 0 for the Rock:\nPress 1 for the Paper:\nPress 2 for the Scissors:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0: //Rock
            printf("Computer's turn:\n");
            srand(time(NULL));
            r = rand() % 3;
            printf("%d\n", r);
            if (r == 0) //Rock
            {
                printf("Oh! It's a Tie.\n");
                // P_score++;
                // C_score++;
            }
            else if (r == 1) //paper
            {
                printf("Oh! You lose. Computer Wins!\n");
                C_score++;
            }
            else if (r == 2) //scissor
            {
                printf("Congrats! %s Wins!\n", name);
                P_score++;
            }
            printf("\n");
            break;
        case 1: //Paper
            printf("Computer's turn:\n");
            srand(time(NULL));
            r = rand() % 3;
            printf("%d\n", r);
            if (r == 0) //Rock
            {
                printf("Congrats! %s Wins!\n", name);
                P_score++;
            }
            else if (r == 1) //paper
            {
                printf("Oh! It's a Tie.\n");
                // P_score++;
                // C_score++;
            }
            else if (r == 2) //scissors
            {
                printf("Oh! You lose. Computer Wins!\n");
                C_score++;
            }
            printf("\n");
            break;
        case 2: //Scissors
            printf("Computer's turn:\n");
            srand(time(NULL));
            r = rand() % 3;
            printf("%d\n", r);
            if (r == 0) //Rock
            {
                printf("Oh! You lose. Computer Wins!\n");
                C_score++;
            }
            else if (r == 1) //paper
            {
                printf("Congrats! %s Wins!\n", name);
                P_score++;
            }
            else if (r == 2) //scissors
            {
                printf("Oh! It's a Tie.\n");
                // P_score++;
                // C_score++;
            }
            printf("\n");
            break;

        default:
            printf("WRONG INPUT! Please try again.\n");
            break;
        }
        printf("Scores after %d attempt:\n", i);
        printf("%s Score = %d\n", name, P_score);
        printf("Computer Score = %d\n", C_score);
        printf("\n");
    }
    if (P_score > C_score)
    {
        printf("Winner is Mr. %s & Final score is %d\n", name, P_score);
        printf("***Rock, Paper & Scissors***");
    }
    else if (P_score < C_score)
    {
        printf("You Lose! Computer Wins!\n");
        printf("***Rock, Paper & Scissors***");
    }
    else
    {
        printf("Oh! It's a Tie Game.\n");
        printf("***Rock, Paper & Scissors***");
    }
}