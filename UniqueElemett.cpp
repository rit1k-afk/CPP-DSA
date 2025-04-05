// find unique number in duplictes M number is twice and only one number single
#include <iostream>
using namespace std;

int unique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 6};
    cout << "Unique number int the array is : " << unique(arr, 7);
    return 0;
}