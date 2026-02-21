#include<stdio.h>
int main()
{
    int i=1,fact=1,num;

    printf("Enter a number :");
    scanf("%d",&num);

    do
    {
       fact=fact*i;
        i++;
    }
    while(i<=num);

    printf("Factorial of %d",fact);
}