#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {10, 3, 25, 67, 4, 1};
    int arr1[5] = {33, 43, 12, 27, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "size of arr " << len << endl;
    bubbleSort(arr, len);
    bubbleSort(arr1, 5);
    print(arr, len);
    print(arr1, 5);
    return 0;
}