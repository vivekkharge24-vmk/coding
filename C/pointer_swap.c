#include<stdio.h>
int main()
{
    // Swapping program using pointer
    int a=500,b=1000;
    int *x,*y;
    printf("Before swapping a = %d,b = %d",a,b);

    x = &a;
    y = &b;

     int temp;
     temp = *x;
     *x = *y;
     *y = temp;

    printf("\nAfter swapping a = %d,b = %d",a,b);

    return 0;
}