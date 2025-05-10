#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>maxi;//gives maximum
    
    maxi.push(34);
    maxi.push(342);
    
    maxi.push(98);
    
    maxi.push(56);
    for(int i=0;i<maxi.size();i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    priority_queue<int,vector<int>,greater<int>>mini;
    mini.push(1);
    mini.push(0);
    mini.push(3);
    int m = mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
    return 0;
}