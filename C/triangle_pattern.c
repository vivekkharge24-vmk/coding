#include <stdio.h>
int main()
{
    // Triangle Star Pattern Print Program
    int r, ch;

    printf("Enter 1 Upper Triangle\n");
    printf("Enter 2 Reverse Triangle\n");
    printf("Enter 3 Upper And Reverse Both Triangle\n");
    printf("Enter a triangle choice number : ");
    scanf("%d", &ch);

    printf("\nEnter a rows : ");
    scanf("%d", &r);

    if (r <= 0)
    {
        printf("Invalid Rows Number Please Enter Positive Number");
    }
    else
    {
        switch (ch)
        {
        case 1:
            printf("\nUpper Triangle :\n");
            for (int i = 1; i <= r; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    printf("* ");
                }
                printf("\n");
            }

            break;

        case 2:
            printf("Reverse Triangle :\n");

            for (int i = r; i >= 0; i--)
            {
                for (int j = 1; j <= i; j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            break;
        case 3:
            printf("\nUpper Triangle :\n");
            for (int i = 1; i <= r; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    printf("* ");
                }
                printf("\n");
            }

            printf("\n");

            printf("Reverse Triangle :\n");

            for (int i = r; i >= 0; i--)
            {
                for (int j = 1; j <= i; j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        default:
        {
            printf("\nInvalid Choice Number Please Try Again ");
        }
        }
    }
    return 0;
}