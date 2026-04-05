//                            Tic-Tac-Toe Game in C Language                              //

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void printBoard(char board[])
{
    printf(" %c | %c | %c \n", board[1], board[2], board[3]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[4], board[5], board[6]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[7], board[8], board[9]);
}

int checkWin(char board[])
{
    if ((board[1] == board[2] && board[2] == board[3] && (board[1] == 'X' || board[1] == 'O')) ||
        (board[4] == board[5] && board[5] == board[6] && (board[4] == 'X' || board[4] == 'O')) ||
        (board[7] == board[8] && board[8] == board[9] && (board[7] == 'X' || board[7] == 'O')) ||
        (board[1] == board[4] && board[4] == board[7] && (board[1] == 'X' || board[1] == 'O')) ||
        (board[2] == board[5] && board[5] == board[8] && (board[2] == 'X' || board[2] == 'O')) ||
        (board[3] == board[6] && board[6] == board[9] && (board[3] == 'X' || board[3] == 'O')) ||
        (board[1] == board[5] && board[5] == board[9] && (board[1] == 'X' || board[1] == 'O')) ||
        (board[3] == board[5] && board[5] == board[7] && (board[3] == 'X' || board[3] == 'O')))
        return 1;

    return 0;
}

int main()
{
    char p1[20], p2[20];
    int move, ch;
    int winner = 0;
    int my_score = 0, computer_score = 0, rounds;

    system("cls");
    system("color 09");

    printf("\n=========================================");
    printf("\n        Welcome Tic-Tac-Toe Game      ");
    printf("\n=========================================\n");

    printf("\n Select Game Mode ");
    printf("\n 1.Player Vs Computer");
    printf("\n 2.Player Vs Player\n");
    printf("\nEnter Game Mode Number : ");
    scanf("%d", &ch);

    if (ch == 1)
    {
        printf("\nEnter Your Name : ");
        scanf("%s", p1);

        printf("\nEnter Play Round : ");
        scanf("%d", &rounds);

        srand(time(0));

        for (int i = 1; i <= rounds; i++)
        {
            winner = 0;

            char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
            int player = 1, status = -1;
            char mark;

            while (status == -1)
            {
                system("cls");
                printf("\n====== Let's Start Game ======\n");
                printf("\n Round : %d | %s : %d |  Computer : %d\n", i, p1, my_score, computer_score);
                printBoard(board);

                if (player % 2 != 0)
                {
                    printf("\n%s (X)\n ", p1);
                    printf("Enter a number (1-9) :");
                    scanf("%d", &move);
                    mark = 'X';
                }
                else
                {
                    printf("\nComputer (O) is thinking...\n");
                    Sleep(1200);
                    do
                    {
                        move = (rand() % 9) + 1;
                    } while (board[move] == 'X' || board[move] == 'O');
                    mark = 'O';
                }

                if (move >= 1 && move <= 9 && board[move] != 'X' && board[move] != 'O')
                {
                    board[move] = mark;

                    if (checkWin(board))
                    {
                        status = 1;

                        if (mark == 'X')
                        {
                            my_score++;
                            winner = 1;
                        }
                        else
                        {
                            computer_score++;
                            winner = 2;
                        }
                    }
                    else
                    {
                        int draw = 1;
                        for (int j = 1; j <= 9; j++)
                        {
                            if (board[j] != 'X' && board[j] != 'O')
                            {
                                draw = 0;
                                break;
                            }
                        }
                        if (draw == 1)
                            status = 0;
                    }
                    player++;
                }
                else
                {
                    printf("\nInvalid Move! Try Again...\n");
                    system("pause");
                    player--;
                }
            }

            printBoard(board);

            printf("\n*******************************************\n");
            if (status == 1)
            {
                if (winner == 1)
                    printf("   Result : %s (X) Winner....  \n", p1);
                else
                    printf("   Result : Computer (O) Winner...  \n");
            }
            else
            {
                printf("       Result : Game Draw!      \n");
            }
            printf("\n*******************************************\n");

            system("pause");
        }

        printf("\n=============== FINAL RESULT ===============\n");
        printf("%s Win : %d\n", p1, my_score);
        printf("Computer Win : %d\n", computer_score);

        if (my_score > computer_score)
            printf("---------------- Winner: %s ----------------\n", p1);
        else if (computer_score > my_score)
            printf("---------------- Winner: Computer ----------------\n");
        else
            printf("--------------- Match Draw! ---------------\n");

        printf("=============================================\n");
    }

    else if (ch == 2)
    {
        int p1_score = 0, p2_score = 0;

        printf("\nEnter Player 1 Name : ");
        scanf("%s", p1);

        printf("\nEnter Player 2 Name : ");
        scanf("%s", p2);

        printf("\nEnter Play Round : ");
        scanf("%d", &rounds);

        for (int i = 1; i <= rounds; i++)
        {
            winner = 0;

            char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
            int player = 1, status = -1;
            char mark;

            while (status == -1)
            {
                system("cls");
                printf("\n====== Let's Start Game ======\n");
                printf("\n Round : %d | %s : %d |  %s: %d\n", i, p1, p1_score, p2, p2_score);
                printBoard(board);

                if (player % 2 != 0)
                    printf("\n%s (X)\n ", p1);
                else
                    printf("\n%s (O)\n ", p2);

                printf("Enter a number (1-9) :");
                scanf("%d", &move);

                if (move >= 1 && move <= 9 && board[move] != 'X' && board[move] != 'O')
                {
                    mark = (player % 2 != 0) ? 'X' : 'O';
                    board[move] = mark;

                    if (checkWin(board))
                    {
                        status = 1;

                        if (mark == 'X')
                        {
                            p1_score++;
                            winner = 1;
                        }
                        else
                        {
                            p2_score++;
                            winner = 2;
                        }
                    }
                    else
                    {
                        int draw = 1;
                        for (int j = 1; j <= 9; j++)
                        {
                            if (board[j] != 'X' && board[j] != 'O')
                            {
                                draw = 0;
                                break;
                            }
                        }
                        if (draw == 1)
                            status = 0;
                    }
                    player++;
                }
                else
                {
                    printf("\nInvalid Move! Try Again...\n");
                    system("pause");
                    player--;
                }
            }

            printBoard(board);

            printf("\n*******************************************\n");
            if (status == 1)
            {
                if (winner == 1)
                    printf("  Result : %s (X) Winner....  \n", p1);
                else
                    printf("  Result : %s (O) Winner...  \n", p2);
            }
            else
            {
                printf("      Result : Game Draw!       \n");
            }
            printf("\n*******************************************\n");

            system("pause");
        }

        printf("\n=============== FINAL RESULT ===============\n");
        printf("%s Win : %d\n%s Win : %d\n", p1, p1_score, p2, p2_score);

        if (p1_score > p2_score)
            printf("---------------- Winner: %s ----------------\n", p1);
        else if (p2_score > p1_score)
            printf("---------------- Winner: %s ----------------\n", p2);
        else
            printf("--------------- Match Draw! ---------------\n");

        printf("=============================================\n");
    }

    else
    {
        printf("\nInvalid Choice Try Again...\n");
    }

    return 0;
}