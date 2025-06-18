#include <bits/stdc++.h>
using namespace std;
// xor of numbers from left to right
int xorFromLeftToRight(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}
int findXor(int l, int r) {
    return xorFromLeftToRight(r) ^ xorFromLeftToRight(l - 1);
}
int main() {
    int l = 5, r = 10;
    cout << "XOR from " << l << " to " << r << " is: " << findXor(l, r) << endl;
    return 0;
}