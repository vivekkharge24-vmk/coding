#include <stdio.h>
int main()
// Multiplcation 2D Matrix Program
{
    int r1, c1, r2, c2;

    printf("Multiplcation 2d matrix rows and column \n");
    printf("\nEnter a rows and column of Matrix A : ");
    scanf("%d %d", &r1, &c1);
    printf("\nEnter a rows and column of Matrix B : ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2)
    {
        printf("Matrix multiplication not possible");
        return 0;
    }
    else
    {

        int a[r1][c1], b[r2][c2], multi[r1][c2];

        printf("Enter elements of Matrix A row-wise:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {

                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter elements of Matrix B row-wise:\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {

                scanf("%d", &b[i][j]);
            }
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                multi[i][j] = 0;
                for (int k = 0; k < c1; k++)
                {
                    multi[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("Matrix Multiplication Result:\n");

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", multi[i][j]);
            }
            printf("\n");
        }

        return 0;
    }
}
