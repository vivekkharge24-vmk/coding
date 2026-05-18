#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 4, 5, 6, 5, 2, 1, 8};
    int size = 9;

    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}