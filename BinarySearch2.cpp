// Binary Search in C++
#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    // Firts let me write the code and then I will explain
    //  it to you briefly with the complete code
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
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
    // we have declared an array of size 5 and the elemnts are sorted i.e. monotonic
    int arr[5] = {2, 4, 23, 56, 78}; //here i hope you guys know what index value is {0,1,2,3,4}
    //it is the index value of the arr[5] elements at arr[0]=1 and arr[4]=78
    //let try to understand why do we need binary search
    cout<<"The index value of 23 is "<<binarySearch(arr,5,23)<<endl;
    return 0;
}
// So the code is ready what isa happening in the code is I give a overall idea before explain it
//in the main function we declare arr with sorted elements and calling the binarySearch function 
// which returns the index value 
