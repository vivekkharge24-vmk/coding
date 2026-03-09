#include <stdio.h>
#include <stdlib.h>
// Dynamic Memory Allocation Program
int main()
{
    int *p;

    p = (int *)calloc(8, sizeof(int)); // calloc() function using multiple blocks of memory

    *p = 20;

    *(p + 0) = 5;
    *(p + 1) = 10;
    *(p + 2) = 15;
    *(p + 3) = 20;
    *(p + 4) = 25;
    *(p + 5) = 30;

    printf("%d\n", *p);
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 2));
    printf("%d\n", *(p + 3));
    printf("%d\n", *(p + 4));
    printf("%d\n", *(p + 5));

    int *s;
    s = (int *)realloc(p, 12); // realloc() function using resize the memory

    *(p + 11) = 50;
    printf("%d\n", *(p + 11));

    free(p); // free() function using clear memory
    free(s); // free() function using clear memory

    return 0;
}
