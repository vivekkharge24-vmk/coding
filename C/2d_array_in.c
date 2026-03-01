#include<stdio.h>
int main()
{
    // Input 2D Array Program
    int arr[3][5];
    
    printf("Insert Array Element : ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    printf("\nArray Element :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}