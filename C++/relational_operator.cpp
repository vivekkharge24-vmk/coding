// Relational Operators Program
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter First Number : ";
    cin >> a;
    cout << "Enter Second Number : ";
    cin >> b;

    cout << endl
         << "======== Calculation ========" << endl;
    cout << "Equal to : " << (a == b) << endl;
    cout << "Not equal to : " << (a != b) << endl;
    cout << "Greater than : " << (a > b) << endl;
    cout << "Less than : " << (a < b) << endl;
    cout << "Greater than Equal to : " << (a >= b) << endl;
    cout << "Less than Equal to : " << (a <= b) << endl;

    return 0;
}