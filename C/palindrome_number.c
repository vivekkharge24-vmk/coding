#include<stdio.h>
int main()
{
    // Palindrome Number Program
    int num,n;

    printf("Enter a number :");
    scanf("%d",&num);

    n = num;
    int s = 0;

    while(n!=0)
    {
        int a = n % 10;
        s = s*10+a;
        n = n / 10;
    }

    if(s == num)
    {
        printf ("%d Is A Palindrome Number",num);
    }
    else
    {
        printf("%d IS Not Palindrome Number",num);
    }

    return 0;
}