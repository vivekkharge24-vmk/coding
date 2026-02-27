#include<stdio.h>
// Array program (1-D)
int main()
{
    int n;

    printf("Enter a size of array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the %d elements : ",n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("\n The element are : %d ",arr[i]);
    }
    return 0;
}