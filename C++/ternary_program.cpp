// Ternary Operator Using Positive And Negative Number Check Program
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    (num >= 0) ? cout << num << " Is Positive Number" : cout << num << " Is Negative Number";

    return 0;
}
