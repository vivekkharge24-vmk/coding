// Decimal Number Convert To Binary Number
#include <iostream>
using namespace std;
int decToBinary(int decNum)
{
    int ans = 0, pow = 1;

    while (decNum != 0)
    {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans; // Binary Form
}
int main()
{
    int decNum = 50;
    cout << "Binary Number Print 1 To 10" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << decToBinary(i) << endl;
    }
    return 0;
}