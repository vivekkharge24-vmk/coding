#include<stdio.h>
int main()
// Find Size Of Array Program (1-D)
{
    int arr[] = {20,34,21,45,67,76};
     int n;
    n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }
    return 0;
}