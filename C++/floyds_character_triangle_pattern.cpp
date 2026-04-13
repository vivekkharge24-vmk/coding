// Floyds character Triangle Pattern Print Program
#include <iostream>
using namespace std;
int main()
{
    char ch = 'A';
    cout << "Floyds character Triangle pattern" << endl;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
