// Logical Operators Program
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
    cout << "Logical And : " << ((a > b) && (a < b)) << endl;
    cout << "Logical Or : " << ((a > b) || (a < b)) << endl;
    cout << "Logical Not : " << (!(a > b)) << endl;

    return 0;
}
