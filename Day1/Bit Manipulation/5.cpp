//set the rightmost unset bit of a number
#include <bits/stdc++.h>
using namespace std;
// Function to set the rightmost unset bit of a number
void setRightmostUnsetBit(int &num) {
    // Find the rightmost unset bit
    int rightmostUnsetBit = ~num & (num + 1);
    // Set the rightmost unset bit
    num |= rightmostUnsetBit;
}
int main() {
    int num = 5; // Binary: 0101
    cout << "Original number: " << num << endl;
    setRightmostUnsetBit(num);
    cout << "Number after setting rightmost unset bit: " << num << endl; // Should print 7 (0111)
    return 0;
}