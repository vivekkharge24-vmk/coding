#include<stdio.h>
int main()
{
    // Pointer To Pointer program
    int x = 50,*y,**z;
    y = &x;
    z = &y;

    printf("\n value of x = %d",x);
    printf("\n Address of x = %d",&x);
    printf("\n value of y = %d",y);
    printf("\n value of *y = %d",*y);
    printf("\n Address of y = %d",&y);
    
    printf("\n value of z = %d",z);
    printf("\n value of *z = %d",*z);
    printf("\n value of **z = %d",**z);
    printf("\n Address of z = %d",&z);

    return 0;

}