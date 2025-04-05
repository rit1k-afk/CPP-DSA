#include <iostream>
using namespace std;
void swapAllternate(int arr[], int size)
{
    int temp=0;
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            // swap(arr[i], arr[i + 1]);
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int even[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int odd[5] = {1, 2, 3, 4, 5};
    swapAllternate(even, 8);
    printArray(even, 8);
    swapAllternate(odd, 5);
    printArray(odd, 5);
    return 0;
}