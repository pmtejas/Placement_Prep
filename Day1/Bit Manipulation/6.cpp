#include <bits/stdc++.h>
using namespace std;
// swap two numbers using bit manipulation
pair<int, int> swapNumbers(int a, int b) {
    // Step 1: XOR the two numbers
    a = a ^ b; // Now a contains the XOR of a and b
    // Step 2: XOR again with b to get original a
    b = a ^ b; // Now b is the original value of a
    // Step 3: XOR again with new b to get original b
    a = a ^ b; // Now a is the original value of b
    return make_pair(a, b);
}
int main() {
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    tie(x, y) = swapNumbers(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}