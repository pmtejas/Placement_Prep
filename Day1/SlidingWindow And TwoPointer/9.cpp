#include <bits/stdc++.h>
using namespace std;
// longest substring with at most k distinct characters
// Given a string s and an integer k, find the length of the longest substring that contains at most k distinct characters.
// Example: s = "eceba", k = 2
// Output: 3
// Explanation: The longest substring with at most 2 distinct characters is "ece" or "ba".
int LongestSubstringKDistinct(string s, int k) {
    int n = s.size();
    int maxlen=-1;
    int l = 0, r = 0;
    unordered_map<char, int>mp;
    while (r<n)
    {
        mp[s[r]]++;
        while (mp.size() > k) {
            mp[s[l]]--;
            if (mp[s[l]] == 0) {
                mp.erase(s[l]);
            }
            l++;
        }
        if (mp.size()== k) {
            maxlen = max(maxlen, r - l + 1);
        }
        r++;
    }
    return maxlen;
}
int main() {
    string s = "eceba";
    int k = 2;
    cout << "Longest substring with at most " << k << " distinct characters: " << LongestSubstringKDistinct(s, k) << endl;
    return 0;
}