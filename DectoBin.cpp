#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int ans = 0;
    int place = 1;  // Place value in binary (1, 10, 100, ...)

    while (n != 0) {
        int bit = n & 1;
        ans += bit * place;
        place *= 10;  // Move to next place in binary
        n = n >> 1;
    }
    
    cout << "Result is " << ans;
    return 0;
}
