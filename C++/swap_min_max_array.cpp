// Swap The Maximum And Minimum Number Of An Array Program
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {12, 8, 23, 24, 14, 25, 65, 85, 32};
    int size = 9;
    int max = arr[0], maxIndex = 0;
    int min = arr[0], minIndex = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }
    }
    int temp;
    for (int i = 0; i < size; i++)
    {
        temp = arr[maxIndex];
        arr[maxIndex] = arr[minIndex];
        arr[minIndex] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}