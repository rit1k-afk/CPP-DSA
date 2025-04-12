#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(3);
    d.push_front(1);
    d.push_back(2);
    cout<<"2nd Index Element "<<d.at(2)<<endl;
    cout<<"Printing all elements :";
    for(int i : d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Front Element : "<<d.front()<<"Bacl Element : "<<d.back()<<endl;
    
    cout<<"Empty or not : "<<d.empty()<<endl;
    cout<<"Before Erasing size : "<<d.size()<<endl;

    d.erase(d.begin(),d.begin()+2);
    cout<<"After Erasing Size :"<<d.size();

    cout<<"Printing elements after erasing :";
    for(int i : d){
        cout<<i<<" ";
    }cout<<endl;

    d.push_front(23);d.push_front(43);d.push_front(456);
    
    cout<<"Printing elements after addind new elements :";
    for(int i : d){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}