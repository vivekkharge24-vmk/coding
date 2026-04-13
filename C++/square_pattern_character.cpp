//  Square Pattern A To Z Characters Print Program
#include <iostream>
using namespace std;
int main()
{
    cout << "A to Z Characters square pattern" << endl;
    char ch = 'A';
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
