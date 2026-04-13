// Triangle Number Reverse Pattern Print Program
#include <iostream>
using namespace std;
int main()
{
    cout << "Triangle number reverse pattern" << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
