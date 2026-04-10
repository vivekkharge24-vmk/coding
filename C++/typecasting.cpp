// Typecasting program
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    double b = 20.50;

    // Implicit Typecasting

    double a2 = a;
    cout << a2 << endl;
    int b2 = b;
    cout << b2 << endl;

    // Explicit Typecasting
    // Data loss

    double a3 = (double)a;
    cout << a3 << endl;
    int b3 = (int)b;
    cout << b3 << endl;
}