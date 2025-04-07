#include <iostream>
using namespace std;

int FirstOcc(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int LastOcc(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[7] = {1, 2, 2, 3, 3, 3, 4};

    cout << "First occurence of 3 is at index " <<FirstOcc(arr,7,3)<<endl;
    cout << "Last occurence of 3 is at index " <<LastOcc(arr,7,3)<< endl;
    cout << "First occurence of 1 is at index " <<FirstOcc(arr,7,1)<<endl;
    cout << "Last occurence of 1 is at index " <<LastOcc(arr,7,1)<< endl;
    return 0;
}