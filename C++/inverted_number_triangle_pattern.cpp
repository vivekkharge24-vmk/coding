// Inverted Number Triangle Pattern Print Program
#include <iostream>
using namespace std;
int main()
{
    cout << "Inverted Number Triangle pattern" << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
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