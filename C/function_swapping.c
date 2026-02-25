#include<stdio.h>

// Swapping program using call by referense
void swap(int *p,int*q)
{
   int temp;
   temp=*p;
   *p=*q;
   *q=temp;

   printf("\nAftar Swapping Number : p=%d,q=%d",*p,*q);
}
int main()
{
    int a=100,b=200;
    printf("Before Swapping Number : a=%d,b=%d",a,b);
    swap(&a,&b);
    return 0;
}