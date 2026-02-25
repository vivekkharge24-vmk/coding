#include<stdio.h>

// Swapping program using call by value
void swap(int x,int y)
{
   int temp;
   temp=x;
    x=y;
    y=temp;

   printf("\nAftar Swapping Number : x=%d,y=%d",x,y);
}
int main()
{
    int a=100,b=200;
    printf("Before Swapping Number : a=%d,b=%d",a,b);
    swap(a,b);
    return 0;
}