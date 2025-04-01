#include<iostream>
using namespace std;
int sum(int arr[],int n){
    int add = 0;
    for(int i=0;i<n;i++){
        add=add+arr[i];
    }
    return add;
}
int main(){
    int arr[3]={2,3,4};
    // sum(arr,3);
    cout<<"Sum of the array elements : "<<sum(arr,3);
    return 0;
}