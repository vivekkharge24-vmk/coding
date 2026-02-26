#include<stdio.h>
int main()
{
    // Sum Of Digit Program
    int num,n;

    printf("Enter a number : ");
    scanf("%d",&num);

    n = num;
    int s = 0;

    while(n!=0)
    {
        int a = n % 10;
        s = s+a;
        n = n / 10;
    }

    printf("Sum Of Digit = %d",s);

    return 0;
}