#include<stdio.h>
int main()
{
    int r,i;

    printf("Enter a range :");
    scanf("%d",&r);
     
    printf("Fibonacci Series :");
    int last=-1,prev=1,curr;

    for(i=0;i<r;i++)
    {
        curr=last+prev;
        printf("%d ",curr);
        last=prev;
        prev=curr;
    }
    return 0;
}