#include<stdio.h>
int main()
{
    int n,i;
     // 1 2 3 4 5 6 7 8 9 10
     // 10 9 8 7 6 5 4 3 2 1 
    printf("Enter a number :");
    scanf("%d",&n);

    for(i=n;i>0;i--) // Print reverse order number
    {
        printf("%d ",i);
    }
}