#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_front(11);
    l.push_front(12);
    l.push_back(20);
    l.push_back(23);
    cout<<"Printing elements : ";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());

    cout<<"after erase :"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<"Size of list : "<<l.size()<<endl;

    list<int> n(5,200);
    list<int>m(n);

    for(int i:m){
        cout<<i<<" ";
    }
    return 0;
}