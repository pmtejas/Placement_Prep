#include <bits/stdc++.h>
using namespace std;
// Bit Manipulation: Check, Set, and Clear a Bit
// example: Given a number and an index, check if the bit at that index is set, set it, and clear it.
// The index is 1-based for user-friendliness.
// explample: For number 5 (binary 0101) and index 2, the output should be:
// 1 (bit is set), 7 (after setting bit), 5 (after clearing bit)
// The output will be: 1 7 5
void bitManipulation(int num,int i) {
    i=i-1;
    if (num & (1 << i)) {
        cout << 1<<" ";
    } else {
        cout << 0<<" ";
    }
    int setBit = num | (1 << i);
    cout << setBit << " ";
    int clearBit = num & ~(1 << i);
    cout << clearBit << " ";
}
// explain the above code step by step
// 1. The function `bitManipulation` takes an integer `num` and an index `i`.
// 2. The index `i` is adjusted to be 0-based by subtracting 1.
// 3. It checks if the bit at index `i` in `num` is set (1) or not (0) using bitwise AND.
// give example of 3rd step
//    For example, if `num` is 5 (binary 0101) and `i` is 2, it checks the second bit (0-indexed).
//    it means num=5 (binary 0101) and i=2 (i<<i)= 1 << 1 = 2 (binary 0010)
//      0101
//    & 0010
//    ----
//    0000
// 4. If the bit is set, it prints `1`, otherwise it prints `0`.
// 5. It then sets the bit at index `i` using bitwise OR and prints the new number.
//    Continuing the example, setting the second bit of 5 (0101) results in 7 (0111).
//    This is done by performing `num | (1 << i)` which results in:
//      0101
//    | 0010
//    ----
//      0111
// 6. Finally, it clears the bit at index `i` using bitwise AND with the negation of the bit mask and prints the new number.
//   For the example, clearing the second bit of 5 (0101) results in 5 (0101) since it was already clear.
//    This is done by performing `num & ~(1 << i)` which results in:
//      0101        
//    & 1101 (negation of 0010)
//    ----
//      0101

int main() {
    int num = 5; // Binary: 0101
    int i = 2;   // Check the 2nd bit (0-indexed)
    bitManipulation(num, i);
    return 0;
}