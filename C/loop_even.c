#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter a range : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)   // Even number find
        printf("%d ",i);
    }
}