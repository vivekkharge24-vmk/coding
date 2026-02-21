#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)  // First loop
    {
        printf("A");

        for(j=1;j<=5;j++)  // Second loop
        {
           printf("B");
        }
          printf("\n");
    }

}