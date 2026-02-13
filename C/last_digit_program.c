#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    
    printf("Last digit number:%d\n",num%10);
    printf("Last two digit number:%d\n",num%100);
    printf("Second last digit number:%d\n",(num/10)%10);

}