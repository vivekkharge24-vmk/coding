// Static variable Check Program
#include <iostream>
using namespace std;
void fun(int a)
{
    static int b = 20;
    a++;
    b++;
    cout << a << " " << b << endl;
}
int main()
{
    int a = 10;
    fun(a);
    fun(a);
    fun(a);
    fun(a);
    fun(a);

    return 0;
}