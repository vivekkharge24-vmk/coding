// Assignment Operators Program
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter First Number : ";
    cin >> a;

    cout << endl
         << "======== Calculation ========" << endl;
    cout << "Addition : " << (a += a) << endl;

    return 0;
}