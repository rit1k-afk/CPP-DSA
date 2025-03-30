#include <iostream>
using namespace std;

// HOLD
void printArray(int arr[], int size)
{
    // printing ana array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Done";
}

int main()
{
    // initializing array
    int arr[15], n = 0;

    // accessing an array
    cout << "Value at 14 index : " << arr[14] << endl;
    // cout<<"Value at 20 index : "<<arr[45] << endl;

    int second[3] = {2, 6, 7};
    cout << "Value at 2 index : " << second[2] << endl;

    int tthird[13] = {2, 11};

    n = 13;
    printArray(tthird, 13);
    cout << endl;

    int four[10] = {0};
    // printing ana array
    n = 10;
    printArray(four, 10);
    cout << endl;
    
    // initializing all locations with 1 not posssible with this below code
    int five[10] = {1};
    n = 10;
    printArray(five, 10);
    cout << endl
         << "Everything is fine." << endl;

    return 0;
}