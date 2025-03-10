#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    int count =1;
    int i=1;
    while (i<=n)
    {
        int j = 1;
        while(j<=n){
            cout<<count<<" ";
            // count =count + 1;
            // count++;
            ++count;
            // j = j+1;
            // j++;
            ++j;
        }
        cout<<endl;
        // i=i+1;
        ++i;
        // i++;
    }
    
}
