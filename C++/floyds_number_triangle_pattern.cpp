// Floyd's Number Triangle Pattern Print Program
#include <iostream>
using namespace std;
int main()
{
    int num = 1;
    cout << "Floyd's Number Triangle pattern" << endl;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}