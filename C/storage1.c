#include <stdio.h>
// Storage Class Program
int fun1(int a, int b)
{
    static int s; // static keyword
    // int s = a + b;
    s++;
    printf("The s is %d\n", s);
    return s;
}

int main()
{

    int s = fun1(3, 4);
    s = fun1(3, 4);
    s = fun1(3, 4);
    s = fun1(3, 4);

    return 0;
}