#include<stdio.h>
int main()
{
    int n,i=1;

    printf("Enter Table Number :");
    scanf("%d",&n);
    
    printf("Multiplication Table is %d\n",n);
    
    while(i<=10)
    {
        printf("%dx%d=%d\n",n,i,n*i);
        i++;
    }
}