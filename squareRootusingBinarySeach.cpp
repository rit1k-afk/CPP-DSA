#include <iostream>
using namespace std;
// if you guys wondering why i used long long int instead of int beacuse of the int range 
// what if our mid value would be 2^31 then it would give us runtime eroor
long long int squareInteger(int n)
{
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

// for the decimal part like what if we have to find the square root of 47
double morePrecision(int n, int precision, int tempSol)
{
    double ans = tempSol;
    double factor = 1;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number for itssquare root : ";
    cin >> n;
    int tempSol = squareInteger(n);
    cout << "Result is : " << morePrecision(n, 5, tempSol) << endl;
    return 0;
}