#include<iostream>
using namespace std;

int peakIndex(int arr[],int n){
    int start = 0, end = n-1;
    int mid = start + (end - start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid + 1;
        }else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
       
}
int main(){
    int arr[6]={3,4,6,7,5,4};
    cout<<peakIndex(arr,6)<<endl;
    return 0;
}