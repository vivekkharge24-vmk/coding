// Triangle Character Pattern Print Program
#include <iostream>
using namespace std;
int main()
{
    cout << "Triangle Character pattern" << endl;
    for (char i = 'A'; i <= 'E'; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}