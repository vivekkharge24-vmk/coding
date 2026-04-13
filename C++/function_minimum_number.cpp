// Find Minimum Number Using Function Program
#include <iostream>
using namespace std;
void min(int x, int y)
{
    if (x < y)
    {
        cout << "Minimum Number Is " << x << endl;
    }
    else
    {
        cout << "Minimum Number Is " << y << endl;
    }
}
int main()
{
    int a, b;
    cout << "Enter First number : ";
    cin >> a;
    cout << "Enter Second Number : ";
    cin >> b;

    min(a, b);

    return 0;
}