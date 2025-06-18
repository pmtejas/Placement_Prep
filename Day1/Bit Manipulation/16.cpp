#include <bits/stdc++.h>
using namespace std;
// fast power function using bit manipulation
double myPow(double x,int n){
    if(n == 0) return 1; // Base case: x^0 = 1
    double res=1;
    bool isNegative = n < 0; // Check if exponent is negative
    n = abs(n); // Work with positive exponent for calculation
    while (n>0)
    {
        if (n&1) { // If the least significant bit is set
            res *= x; // Multiply result by x
        }
        x *= x; // Square the base
        n >>= 1; // Right shift n by 1 (divide by 2)
    }
    return isNegative ? 1 / res : res;
}
int main() {
    double base = 2.0;
    int exp = 10;
    cout << "Fast power of " << base << " raised to " << exp << " is: " << myPow(base, exp) << endl;
    return 0;
}