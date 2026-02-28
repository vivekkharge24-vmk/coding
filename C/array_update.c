#include<stdio.h>
int main()
{
    // Update Array Program
    int arr[10]={1,2,3,4,5};
    
    arr[2] = 6;
    arr[4] = 8;
    printf("Update Element Are : ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}