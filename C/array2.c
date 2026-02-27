#include<stdio.h>
int main()
{
    // Marks And Percentage Program Using Array (1-D)
    int arr[5];


    printf("Enter the 5 subject marks :");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum=0;

    for(int i=0;i<5;i++)
    {
        sum = sum + arr[i];
    }

    printf("Total marks %d",sum);

    float per = ((float)sum/500)*100;
    printf("\n Percentage = %.2f",per);

    if(per >= 90)
    {
        printf("\n First class pass");
    }
    else if(per >= 65 && per < 90)
    {
        printf("\n Second class pass");
    }
    else if(per >= 35 && per < 65)
    {
        printf("\n Average class pass");
    }
    else
    {
       printf("\n Fail ! Try again");
    }

    return 0;
}