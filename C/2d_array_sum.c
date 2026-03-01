#include<stdio.h>
int main()
{
    // Addition Of 2 Matrix Program
    int r,c;

    printf("Enter a rows : ");
    scanf("%d",&r);
    printf("\nEnter a column : ");
    scanf("%d",&c);
    
     int a[r][c],b[r][c],sum[r][c];

    printf("Enter a element for matrix A : ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }  
    }
    printf("Enter a element for matrix B : ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("Addition of matrix : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
          sum[i][j] = a[i][j] - b[i][j];
          printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}