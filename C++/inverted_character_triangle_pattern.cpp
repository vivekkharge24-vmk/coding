// Inverted Character Triangle Pattern Print Program
#include <iostream>
using namespace std;
int main()
{
    cout << "Inverted Character Triangle pattern" << endl;
    for (char i = 'A'; i <= 'E'; i++)
    {
        for (int j = 'A'; j <= 'E'; j++)
        {
            if (j >= i)
            {
                cout << i << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}