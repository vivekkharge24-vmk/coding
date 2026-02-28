#include<stdio.h>
int main()
{
    // Insertion Array Program
    int arr[10]={1,2,3,4,5};

    int n = 5;
    int pos = 2;
    int value = 9;

    for(int i=n;i>pos;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos]=value;
    n++;
    
    printf("The Element Are : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}