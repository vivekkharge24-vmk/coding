// Check Positive Number And Negative Number Program
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if (num >= 0)
    {
        cout << num << " Is Positive Number";
    }
    else
    {
        cout << num << " Is Negative Number";
    }
    return 0;
}