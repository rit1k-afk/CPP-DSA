//Searching in the sorted and rotated array
#include <iostream>
using namespace std;
//this function will help us to find the pivot element in the array
int getPivot(int arr[], int n)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
//this function will help us to find the element in the array using binary search
//the time complexity of binary search is O(log n)
int binarySearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
//this function will help us to find the position of the element in the array
int findPosition(int arr[], int n, int k)
{
    int pivot = getPivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binarySearch(arr, pivot, n - 1, k);
    }
    else
        return binarySearch(arr, 0, pivot-1, k);
}
//it is the main fuction of the program
//it will call the findPosition function and print the result
int main()
{
    //here we have passed the array and its size and the element we want top find in the array
    int arr[6] = {3, 8, 10, 17, 1,2};

    cout << "1 is at index " << findPosition(arr,6, 3) << endl;
    return 0;
}