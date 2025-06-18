#include <bits/stdc++.h>
using namespace std;
// count the number of bits that are set in a number
int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1; // Increment count if the last bit is set
        num >>= 1;        // Right shift to check the next bit
    }
    return count;
}
int main() {
    int num = 29; // Example number
    cout << "Number of set bits in " << num << " is: " << countSetBits(num) << endl;
    return 0;
}