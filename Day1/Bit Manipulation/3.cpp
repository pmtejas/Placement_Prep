#include <bits/stdc++.h>
using namespace std;
string oddEven(int n) {
    if (n & 1) {
        return "Odd"; // If the least significant bit is set, the number is odd
    } else {
        return "Even"; // If the least significant bit is not set, the number is even
    }
}
int main() {
    int num = 6;
    cout << oddEven(num) << endl;
    return 0;
}