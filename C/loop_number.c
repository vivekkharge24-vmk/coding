#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)  // Outer loop
    {
        for(j=1;j<=5;j++) // Inner loop
        {
            printf("%d",i);
        }
        printf("\n");
    }
}