#include<stdio.h>

int add(int a,int b) // Parameter >>> int a,int b
{
    int c=a+b;
    printf("%d\n",c);
}
int sub(int a,int b)
{
    int c=a-b;
    printf("%d\n",c);
}

int main()
{
    add(10,20); // Argument >>> 10,20
    sub(8,5);   // Argument >>> 8,5
}
