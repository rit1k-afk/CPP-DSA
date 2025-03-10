#include<iostream>
using namespace std;
int main(){
    // int n,m;
    // cout << "Enter number of rows and colums respectively : ";
    // cin >> n >> m ;
    // cout << "Rows : " <<n <<" Columns : "<<m<<endl;
    // int i= 1, j= 1;
    // while(i<=n){
    //     while(j<=m){
    //         cout << j;
    //         j=j+1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }
    int n ;
    cin>>n;
    int i=1;
    while (i<=n){
        int j=1;
        while(j<=n){
            //for print in reverse like n = 4 then 4321
            cout<<n-j+1;
            //for print in pattern like 123 if n=3
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i= i+1;
    }
    return 0;
}