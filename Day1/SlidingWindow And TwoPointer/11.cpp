#include <bits/stdc++.h>
using namespace std;
// minimum window susbstring
// Given two strings s and t, find the minimum window substring of s that contains all characters of t.
// Example: s = "ADOBECODEBANC", t = "ABC"
// Output: "BANC"
// Explanation: The minimum window substring is "BANC" which contains all characters of t.
// This can be solved using a sliding window approach.
string minWindow(string s,string t){
    if (s.size() < t.size()) return "";
    vector<int> hash(256, 0);
    for (char c : t) {
        hash[c]++;
    }
    int l = 0, r = 0, count = t.size(), minLen = INT_MAX, start = 0;
    while (r < s.size()) {
        if (hash[s[r]] > 0) {
            count--;
        }
        hash[s[r]]--;
        r++;
        
        while (count == 0) {
            if (r - l < minLen) {
                minLen = r - l;
                start = l;
            }
            hash[s[l]]++;
            if (hash[s[l]] > 0) {
                count++;
            }
            l++;
        }
    }
    return minLen == INT_MAX ? "" : s.substr(start, minLen);
    
}
int main() {
    string s = "ADOBECODEBANC";
    string t = "ABC";
    cout << "Minimum window substring: " << minWindow(s, t) << endl;
    return 0;
}