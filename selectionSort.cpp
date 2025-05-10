#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
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
    int arr[5] = {33, 43, 12, 27, 8};
    int arr1[5] = {3, 5, 1, 7, 31};
    selectionSort(arr, 5);
    selectionSort(arr1, 5);
    print(arr, 5);
    print(arr1, 5);
    return 0;
}