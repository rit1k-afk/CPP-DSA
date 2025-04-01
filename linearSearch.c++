#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {1, -2, 3, 445, -22, 11, 45, 67, 9, 88};
    cout << "Entter the element to search int he array : ";
    int key;
    cin >> key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "Key is present." << endl;
        ;
    }
    else
        cout << "Key is absent." << endl;
    return 0;
}
