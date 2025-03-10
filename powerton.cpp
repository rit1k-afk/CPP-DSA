#include <iostream>
#include<math.h>
using namespace std;

// double power(double x, int n) {
//     double result = 1.0;
//     for (int i = 0; i < n; ++i) {
//         result *= x;
//     }
//     return result;
// }

int main() {

    double x,y,ans;
    int n;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;
    ans = pow(y,n);
    // double result = power(x, n);
    // cout << x << " to the power of " << n << " is " << result << endl;
    cout << y << " to the power of " << n << " is " << ans << endl;

    return 0;
}