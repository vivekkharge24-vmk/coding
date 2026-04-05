//                 Console-Based Rock Paper Scissors Game in C Language                    //
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char name[20];
    int n;
    int user_choice, computer_choice;
    int user_score = 0, computer_score = 0;

    srand(time(NULL));

    system("cls");
    system("color 0B");

    printf("===========================================================\n");
    printf("          Welcome To Rock Paper Scissors Game          \n");
    printf("===========================================================\n");

    printf("Enter Your Name : ");
    scanf("%s", name);
    printf("Enter play round : ");
    scanf("%d", &n);

    printf("\nLet'start the %d round game. ", n);
    printf("\n-------------------------------------------\n");

    for (int i = 1; i <= n; i++)
    {

        while (1)
        {
            printf("\n------------ Round %d ------------", i);
            printf("\n1.Rock   2.Paper  3.Scissors\n");

            printf("\nEnter your choice (1-3): ");
            scanf("%d", &user_choice);

            if (user_choice == 1)
            {
                printf("\nYour choice : Rock\n");
            }
            else if (user_choice == 2)
            {
                printf("\nYour choice : Paper\n");
            }
            else if (user_choice == 3)
            {
                printf("\nYour choice : Scissors\n");
            }

            if (user_choice >= 1 && user_choice <= 3)
            {
                break;
            }
            else
            {
                printf("Invalid Choice! Please enter 1,2 or 3 \n");
            }
        }

        computer_choice = (rand() % 3) + 1;
        // printf("Computer choice: %d \n", computer_choice);
        if (computer_choice == 1)
        {
            printf("Computer choice : Rock\n");
        }
        else if (computer_choice == 2)
        {
            printf("Computer choice : Paper\n");
        }
        else
        {
            printf("Computer choice : Scissors\n");
        }

        if (user_choice == computer_choice)
        {
            printf("\nResult : This round is a Draw!\n");
        }
        else if ((user_choice == 1 && computer_choice == 3) ||
                 (user_choice == 2 && computer_choice == 1) ||
                 (user_choice == 3 && computer_choice == 2))
        {
            printf("\nResult : You won this round.\n");
            user_score++;
        }
        else
        {
            printf("\nResult : Computer won this round.\n");
            computer_score++;
        }
    }

    printf("\n**********************************************************\n");
    printf("Final Score : %s : %d | computer : %d\n", name, user_score, computer_score);

    if (user_score > computer_score)
    {
        printf("\nWinner : %s Congratulations!\n", name);
    }
    else if (user_score < computer_score)
    {
        printf("\nWinner : Computer ! Better luck next time.\n");
    }
    else
    {
        printf("\nResult : The game is a Tie! \n");
    }
    printf("\n**********************************************************\n");

    return 0;
}