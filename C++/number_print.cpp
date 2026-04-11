// 1 To N Number Print Program
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "Print 1 To " << n << " Number" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    return 0;
}