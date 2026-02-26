#include<stdio.h>
int main()
{
    // Reverse Number Program
    int num,n;

    printf("Enter a Number : ");
    scanf("%d",&num);

    n=num;
    int s = 0;

    while(n!=0)
    {
        int a = n % 10;
        s = s*10+a;
        n = n / 10;
    }

    printf("Reverse number : %d",s);
    return 0;
    
}