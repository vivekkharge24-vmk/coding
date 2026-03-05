#include<stdio.h>
#include<string.h>
// Without String Reverse Program
int main()
{
    char str[10] = {"vivek"};
    int n = strlen(str);

    int start = 0,end = n-1,temp;
    

    while (start <=end)
    {
       temp = str[start];
       str[start] = str[end];
       str[end] = temp;

       start++;
       end--;
    }
    printf("%s",str);
}