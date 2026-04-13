// Print 1 To N All Prime Numbers Using Function Program
#include <iostream>
using namespace std;
void prime(int n)
{
    cout << "1 to " << n << " Prime Numbers :" << endl;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    prime(num);
    return 0;
}