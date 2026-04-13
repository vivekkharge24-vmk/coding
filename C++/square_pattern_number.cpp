//  Square Pattern 1 To 25 Numbers Print Program
#include <iostream>
using namespace std;
int main()
{
    int num = 1;
    cout << "1 to 25 Number square pattern" << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}
