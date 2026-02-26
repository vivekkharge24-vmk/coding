#include<stdio.h>
int main()
{
   // Armstrong Find Program Using While Loop 
   // Enter only three digit
     int num,n;

    printf("Enter a Number :");
    scanf("%d",&num);

    n = num;
    int s = 0;
    while(n!=0)
    {
       int a = n % 10;
       s = s + a*a*a;
       n = n / 10;
    }

    if(s == num)
    {
        printf("%d Is Armstrong Number",num);
    }
    else
    {
       printf("%d Is Not Armstrong Number",num);
    }
    return 0;
}