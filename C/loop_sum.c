#include<stdio.h>
int main()
{
    int i,n,sum;
     
    printf("Enter a number :");
    scanf("%d",&n);

    sum=0;

    for(i=1;i<=n;i++)
    {
        sum=sum+i;  // 5 >>> 1+2+3+4+5 >>> 15
    }
    printf("Sum of N natural number = %d",sum);

   return 0;
}