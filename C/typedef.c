#include <stdio.h>
int main()
// typedef Keyword Use Program
{
    typedef int *pointer; // previous name change to new name and both name using at a time
    pointer a, b;
    int c = 20;

    a = &c;
    b = &c;

    printf("Value of a : %d\n", *a);
    printf("Value of b : %d\n", *b);
    return 0;
}