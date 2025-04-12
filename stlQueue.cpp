#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Wrong");
    q.push("Major");
    q.push("Efficient");
    q.push("Auto");

    cout<<"First Element : "<<q.front()<<endl;
    cout<<"last Element : "<<q.back()<<endl;
    q.pop();
    cout<<"First element : "<<q.front()<<endl;
    return 0;
}