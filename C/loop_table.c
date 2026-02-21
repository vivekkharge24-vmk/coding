#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter Table Number : ");
    scanf("%d",&n);

    printf("\nMultiplication Table is %d \n ",n);

    for(i=1;i<=10;i++)
    {
        printf("%dx%d=%d\n",n,i,n*i);
    }
}