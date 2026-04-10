// Decrement Operator Program
#include <iostream>
using namespace std;
int main()
{
    int a = 5, r, a2 = 5, r2;

    // Pre-decrement
    r = --a;
    cout << endl
         << "======== Calculation ========" << endl;
    cout << "result : " << r << endl;
    cout << "value of a : " << a << endl;

    // Post-decrement
    cout << endl
         << "======== Calculation ========" << endl;
    r2 = a2--;
    cout << "result : " << r2 << endl;
    cout << "Value of a : " << a2 << endl;

    return 0;
}
