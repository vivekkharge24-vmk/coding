#include<stdio.h>
#include<string.h>
// Palindrome With String Program
int main()
{
    char a[10] = {"nayan"};

    int n = strlen(a);

    int start = 0, end = n-1;
    int f=0;

    while(start<=end)
    {
        if(a[start] != a[end])
        {
           printf("It is not palindrome string ");
           f=1;
           break;
        }
        start ++;
        end--;
    }
    if(!f)
    {
        printf("It is a palindrome string ");
    }
}