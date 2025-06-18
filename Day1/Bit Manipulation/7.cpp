#include <bits/stdc++.h>
using namespace std;
// divide two numbers using bit manipulation
int divide(int dividend, int divisor) {
    if (divisor == 0) {
        throw invalid_argument("Division by zero is not allowed.");
    }
    
    int quotient = 0;
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1; // Determine the sign of the result
    dividend = abs(dividend);
    divisor = abs(divisor);
    
    for (int i = 31; i >= 0; --i) {
        if ((dividend >> i) >= divisor) {
            dividend -= (divisor << i);
            quotient |= (1 << i);
        }
    }
    
    return sign * quotient;
}
int main() {
    int dividend = 10;
    int divisor = 2;
    try {
        int result = divide(dividend, divisor);
        cout << "Result: " << result << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}