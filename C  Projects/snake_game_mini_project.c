//                                 Classic Snake Game in C                                //
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#define width 20
#define height 20
#define maxtail 100

int x, y;
int foodx, foody;
int score;
int gameover;
int speed = 600;
int direction = 0;

int tailX[maxtail], tailY[maxtail];
int nTail = 0;

void setup()
{
    gameover = 0;
    x = width / 2;
    y = height / 2;
    score = 0;
    direction = 0;
    nTail = 0;
    srand(time(0));
    foodx = 1 + rand() % (width - 2);
    foody = 1 + rand() % (height - 2);
}

void draw()
{
    system("cls");
    system("color 0A");
    printf("\n===== Snake Game =====\n");

    for (int i = 0; i <= height; i++)
    {
        for (int j = 0; j <= width; j++)
        {

            if (i == 0 || i == height || j == 0 || j == width)
            {
                printf("#");
            }

            else if (i == y && j == x)
            {
                printf("0");
            }

            else
            {
                int printed = 0;
                for (int k = 0; k < nTail; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        printf("o");
                        printed = 1;
                        break;
                    }
                }
                if (!printed)
                {

                    if (i == foody && j == foodx)
                        printf("F");
                    else
                        printf(" ");
                }
            }
        }
        printf("\n");
    }

    printf("Score = %d\n", score);
}

void input()
{
    if (kbhit())
    {
        switch (getch())
        {
        case 'w':
            direction = 1;
            break;
        case 's':
            direction = 2;
            break;
        case 'a':
            direction = 3;
            break;
        case 'd':
            direction = 4;
            break;
        case 'p':
            while (1)
            {
                if (kbhit() && getch() == 'p')
                    break;
            }
            break;
        }
    }
}

void logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;

    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (direction)
    {
    case 1:
        y--;
        break;
    case 2:
        y++;
        break;
    case 3:
        x--;
        break;
    case 4:
        x++;
        break;
    }

    if (x <= 0 || x >= width || y <= 0 || y >= height)
        gameover = 1;

    for (int i = 0; i < nTail; i++)
    {
        if (tailX[i] == x && tailY[i] == y)
            gameover = 1;
    }

    if (x == foodx && y == foody)
    {
        score += 10;
        nTail++;
        int valid = 0;
        while (!valid)
        {
            foodx = 1 + rand() % (width - 2);
            foody = 1 + rand() % (height - 2);
            valid = 1;
            for (int i = 0; i < nTail; i++)
            {
                if (tailX[i] == foodx && tailY[i] == foody)
                {
                    valid = 0;
                    break;
                }
            }
            if (foodx == x && foody == y)
                valid = 0;
        }
    }
}

void savescore()
{
    FILE *fp;
    int high;

    fp = fopen("snake_game_score.txt", "r");
    if (fp == NULL)
        high = 0;
    else
    {
        fscanf(fp, "%d", &high);
        fclose(fp);
    }

    if (score > high)
    {
        high = score;
        fp = fopen("snake_game_score.txt", "w");
        fprintf(fp, "%d", score);
        fclose(fp);
    }

    printf("\nHigh Score = %d\n", high);
}

int main()
{

    setup();

    while (!gameover)
    {
        draw();
        input();
        logic();
        Sleep(speed);
    }

    system("color 0C");
    savescore();
    printf("Game Over\nFinal Score = %d\n", score);

    return 0;
}