#include<stdio.h>
int main()
{
    int i,base,powar,result;

    printf("Enter a Base :");
    scanf("%d",&base);

    printf("Enter a Powar :");
    scanf("%d",&powar);

    result = 1;

    for(i=1;i<=powar;i++) 
    {
       result = result*base;  // 2*2*2 >>> 8
    }
    printf("Powar Of Given Number : %d",result);

    return 0;
}