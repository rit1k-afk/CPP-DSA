#include<iostream>
#include<vector>
using namespace std;
int main(){
    //Vectors are dynamic array means if the size of the vector is not defined then it will automatically increase the size of the vector.
    //We can also use the vector as a 2D array by using the vector of vectors.
    vector<int> v; // creating a vector of integers
    cout<<"Size of vector is : "<<v.size()<<endl; // size of vector is 0
    //we can also perform random access like pushing and poping the elements in the vector
    v.push_back(23);
    v.push_back(45);
    v.push_back(67);
    v.push_back(89);
    cout<<"Size of vector is : "<<v.size()<<endl; // size of vector is 4
    cout<<"Elements of vector are : "<<endl;    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Capacity of vector is : "<<v.capacity()<<endl; // capacity of vector is 4
    //pop_back() function is used to remove the last element of the vector.
    v.pop_back(); // removing the last element of the vector
    cout<<"Size of vector is : "<<v.size()<<endl; // size of vector is 3
    // creating a vector with size 5 and all the elements are initialized to 4
    vector<int> a(5,4);
    cout<<"Size of vector is : "<<a.size()<<endl; // size of vector is 5
    cout<<"Elements of vector are : "<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}