// Pyramid Pattern Print Program
#include <iostream>
using namespace std;
int main()
{
    cout << "Pyramid Triangle pattern" << endl;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= i + 3)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}