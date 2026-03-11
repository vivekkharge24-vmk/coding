#include <stdio.h>
// Storage Class Program
int sum = 897; // global class
int fun1(int a, int b)
{
    // auto int sum;
    extern int sum; // extern keyword
    // sum = a + b;
    return sum;
}
// int sum = 98; // global class
int main()
{
    int sum = fun1(3, 4);
    // int sum = 98;
    printf("The sum is %d", sum);
    return 0;
}