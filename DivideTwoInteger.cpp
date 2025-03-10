#include <iostream>
#include <climits>

int divide(int dividend, int divisor) {
    // Handle edge cases
    if (divisor == 0) return INT_MAX;
    if (dividend == INT_MIN && divisor == -1) return INT_MAX;
    
    // Determine the sign of the result
    bool negative = (dividend < 0) ^ (divisor < 0);
    
    // Convert both numbers to positive
    long long absDividend = std::abs(static_cast<long long>(dividend));
    long long absDivisor = std::abs(static_cast<long long>(divisor));
    
    long long quotient = 0;
    
    // Subtract divisor from dividend until dividend is less than divisor
    while (absDividend >= absDivisor) {
        long long tempDivisor = absDivisor, multiple = 1;
        while (absDividend >= (tempDivisor << 1)) {
            tempDivisor <<= 1;
            multiple <<= 1;
        }
        absDividend -= tempDivisor;
        quotient += multiple;
    }
    
    // Apply the sign to the result
    quotient = negative ? -quotient : quotient;
    
    // Ensure the result is within the 32-bit signed integer range
    if (quotient > INT_MAX) return INT_MAX;
    if (quotient < INT_MIN) return INT_MIN;
    
    return static_cast<int>(quotient);
}

int main() {
    int dividend = 10;
    int divisor = 3;
    std::cout << "Result of " << dividend << " / " << divisor << " = " << divide(dividend, divisor) << std::endl;
    return 0;
}