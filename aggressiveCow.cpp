#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(int arr[], int len, int k, int mid)
{
    int cowCount = 1;
    int lastPosition = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (arr[i] - lastPosition >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPosition = arr[i];
        }
    }
    return false;
}

int agressiveCows(int arr[], int len, int k)
{
    int s = 0;
    int maxi = -1;
    for (int i = 0; i < len; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, len, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[5] = {2, 3, 1, 4, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    
    sort(arr, arr + len);
    
    cout << "Longest Minimum distance : " << agressiveCows(arr, len, k);
    return 0;
}