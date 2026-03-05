#include<stdio.h>
#include<string.h>
// Compare String Program
int main()
{
    char a[] = {"kharge"};
    char b[] = {"kharge"};

    int l = strcmp(a,b);

    if(l==0)
    {
        printf("Both string are equal");
    }
    else
    {
        printf("Both string are not equal");
    }
}