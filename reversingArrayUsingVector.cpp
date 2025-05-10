#include <vector>
#include <iostream>
using namespace std;

vector<int> reverse(vector<int> v,int m)
{
   // int s=m+1, e=v.size()-1; //when we have to reverse an array with an given location
    int s = 0, e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(1);
    v.push_back(2);
    v.push_back(6);
    v.push_back(23);

    vector<int> ans = reverse(v,2);
    cout<<"Vector after reversing :\n";
    print(ans);
    return 0;
}