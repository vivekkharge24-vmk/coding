// Check Character Upper Case And Lower Case Program
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character : ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " Is Upper Case Character";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " Is Lower Case Character";
    }
    else
    {
        cout << ch << " Is Not A Character";
    }
}