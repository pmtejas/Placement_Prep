#include <bits/stdc++.h>
using namespace std;
// minimum window subsequence
// Given two strings s and t, find the minimum window subsequence of s that contains all characters of t in order.
// Example: s = "ADOBECODEBANC", t = "ABC"
// Output: "ADOBEC"
// Explanation: The minimum window subsequence is "ADOBEC" which contains all characters of t in order.
// This can be solved using a sliding window approach.
string minwindowSubsequence(string s,string t){
    int m=s.size(),n=t.size();
    if (m < n) return "";
    int minLen = INT_MAX;
    string result = "";
    for (int i = 0; i < m; i++) {
        int j = 0, k = i;
        while (j < n && k < m) {
            if (s[k] == t[j]) {
                j++;
            }
            k++;
        }
        if (j == n) { // Found a valid subsequence
            int len = k - i;
            if (len < minLen) {
                minLen = len;
                result = s.substr(i, len);
            }
        }
    }
    return result;
}
int main() {
    string s = "ADOBECODEBANC";
    string t = "ABC";
    cout << "Minimum window subsequence: " << minwindowSubsequence(s, t) << endl;
    return 0;
}