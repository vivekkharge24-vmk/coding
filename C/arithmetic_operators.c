#include<stdio.h>
int main()
{
   // int a=2,b=5;   // set a Numbers
    int a,b;    // User enter Numbers
    printf("Enter Two Numbers:"); 
    scanf("%d%d", &a, &b);
    printf("Addition=%d\n",a+b);
    printf("Subtraction=%d\n",a-b);
    printf("Multiplication=%d\n",a*b);
    printf("Division=%d\n",a/b);
    printf("Modulo=%d\n",a%b);
   return 0;
}