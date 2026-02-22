#include<stdio.h>
int main()
{
    int i=1,num,sum=0;
     
    printf("Enter a number :");
    scanf("%d",&num);
    do
    {
        sum=sum+i;
        i++;
    } while (i<=num);
    printf("%d Number,Total sum is %d ",num,sum);
    
}