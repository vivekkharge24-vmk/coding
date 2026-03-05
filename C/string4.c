#include<stdio.h>
#include<string.h>
// Copy String Program
int main()
{
    char str[10] = {"kharge"};
    char abc[10];

    strcpy(abc,str);

    printf("%s\n",abc);
    printf("%s",str);
}