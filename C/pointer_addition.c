#include<stdio.h>
int main()
{
    // Addition of two number using pointer program
    int a=20,b=30;
    int *x,*y;

    x = &a;
    y = &b;

    int z = *x+*y;
    printf("Addition of %d and %d is %d",a,b,z);

    return 0;
}