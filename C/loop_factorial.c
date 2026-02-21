#include<stdio.h>
int main()
{
    int i,fact,num;

    printf("Enter a number :");
    scanf("%d",&num);

    fact=1;
    
    for(i=1;i<=num;i++)
    {
        fact=fact*i;  // 5! >>>5*4*3*2*1 >>> Factorial is 120
    }

    printf("Factorial of given number is %d",fact);

    return 0;
}