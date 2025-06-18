#include <bits/stdc++.h>
using namespace std;
bool ischeckBit(int n,int k){
    if (n & (1 << k)) {
        return true; // Bit is set
    } else {
        return false; // Bit is not set
    }
    return false; // Default return (not reached)
}
int main() {
    int n = 5; // Binary: 0101
    int k = 2; // Check the 2nd bit (0-indexed)
    if (ischeckBit(n, k)) {
        cout << "Bit is set" << endl;
    } else {
        cout << "Bit is not set" << endl;
    }
    //0101
    // 0010
    // ----
    // 0000
    // Explanation: The 2nd bit (0-indexed) of 5 is not set, so it prints "Bit is not set".
    return 0;
}