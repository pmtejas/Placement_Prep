#include<bits/stdc++.h>
using namespace std;
// Function to convert a Roman numeral to an integer
int romanToInteger(string s) {
    unordered_map<char, int> romanMap = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };
    
    int total = 0;
    int prevValue = 0;
    
    for (char c : s) {
        int currentValue = romanMap[c];
        
        // If the current value is greater than the previous value,
        // it means we have a subtractive combination (e.g., IV, IX)
        if (currentValue > prevValue) {
            total += currentValue - 2 * prevValue; // Subtract the previous value twice
        } else {
            total += currentValue;
        }
        
        prevValue = currentValue; // Update previous value
    }
    
    return total;
}
int main()
{
    string s = "MCMXCIV"; // Example Roman numeral
    cout << "The integer value of the Roman numeral " << s << " is: " << romanToInteger(s) << endl;
    
    return 0;
}