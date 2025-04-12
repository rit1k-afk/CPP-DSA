#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Sharma");
    s.push("Bhushan");
    s.push("Shashi");

    cout<<"Top Element : "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element : "<<s.top()<<endl;
    cout<<"Size "<<s.size()<<endl;
    cout<<"Empty or Not : "<<s.empty()<<endl;

    return 0;
}