#include<stdio.h>
int main()
{
    // Armstrong Find Program Without Using While Loop 
    int num;

    printf("Enter a Number :");
    scanf("%d",&num);

    int a,b,c,y,d;

    a = num % 10;
    y = num / 10;
    b = y % 10;
    c = y / 10;

    d = (a*a*a) + (b*b*b) +(c*c*c);

    if (d == num)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
  
    }
}

