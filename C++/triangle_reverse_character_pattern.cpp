// Triangle Character Reverse Pattern Print Program
#include <iostream>
using namespace std;
int main()
{
    cout << "Triangle character reverse pattern" << endl;
    for (char i = 'A'; i <= 'E'; i++)
    {
        for (char j = i; j >= 'A'; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
