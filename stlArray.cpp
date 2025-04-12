#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,6> a ={2,4,6,8,10,12};
    int size = a.size();
    cout << "The size of the array is: " << size << endl;   
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // Here it can be acceseed randomly by using the at() function 
    cout<<"Elements of 2nd Index = "<<a.at(2)<<endl;
    //a.empty() is boolean type functions which checks the array is empty or not. Returns 0 if not empty or 1 if empty
    cout<<"Empty or Not :"<<a.empty()<<endl;
    // we can back() and front() functions to get the last and first element of the array respectively.
    cout<<"Last Element of the array : "<<a.back()<<endl;
    cout<<"First Element of the array : "<<a.front()<<endl;
    // we can fill the array with same value using fill() function.
    a.fill(0);
    cout<<"After filling the array with 0 : "<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}