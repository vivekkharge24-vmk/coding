#include<stdio.h>
int main()
{
    // Pointer program
    int x=20;

    int *y;

    y = &x;


    printf("\n value of x = %d",x);

    printf("\n Address of x = %d",&x);

    printf("\n value of y = %d",y);

    printf("\n value of *y = %d",*y);

    return 0;

}