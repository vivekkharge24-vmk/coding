// Find Maximum  Number In Array Program
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a element : ";
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << endl
         << "Maximum Number Is " << max << endl;
    return 0;
}
