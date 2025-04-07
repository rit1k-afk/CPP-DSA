#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start=0;
    int end = size-1;
    int mid=start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int even[6]={2,4,6,8,12,13};
    int odd[5]={4,9,14,23,42};

    int evenIndex = binarySearch(even,6,12);
    int evenIndex2 = binarySearch(even,6,132);
    int oddIndex = binarySearch(odd,5,4);
    cout<<"Index of 12 is : "<<evenIndex<<endl;
    cout<<"Index of 12 is : "<<oddIndex<<endl;
    cout<<"Index of 132 is : "<<evenIndex2<<endl;

    return 0;
}