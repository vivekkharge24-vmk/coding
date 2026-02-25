#include<stdio.h>
// Call by value program
void fun1(int y)
{
    y=30;
    printf("\n In the function : y=%d",y);
}

int main()
{
    int x=10;
    printf("\nBefore value passing : x=%d",x);
    fun1(x);
    printf("\nAfter value passing : x=%d",x);
    return 0;
}