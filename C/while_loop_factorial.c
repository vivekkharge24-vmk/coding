#include<stdio.h>
int main()
{
    int i=1,num,fact=1;
    printf("Enter a number :");
    scanf("%d",&num);

    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of given number is %d",fact);
}