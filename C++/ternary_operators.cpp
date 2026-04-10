// Ternary Operator two number Program
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    int c = (a > b) ? (a + b) : (a - b);
    cout << c << endl;
    return 0;
}
