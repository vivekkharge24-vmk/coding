#include<stdio.h>
int main()
{
    int num,sum=1;

    printf("Enter a number :");
    scanf("%d",&num);

    do
    {
        printf("%d\n",sum);
        sum=sum+1;

    }
    while(sum<=num);

}