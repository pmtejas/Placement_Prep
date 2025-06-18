#include <bits/stdc++.h>
using namespace std;
// longest character replacement problem
// Given a string s and an integer k, find the length of the longest substring that can be obtained by replacing at most k characters.
// example: s = "AABABBA", k = 1
// output: 4

int charcterReplacement(string s, int k) {
    int n=s.size(),maxlen=0,maxfreq=0,l=0,r=0;
    vector<int>freq(26,0);
    while (r < n) {
        freq[s[r] - 'A']++;
        maxfreq = max(maxfreq, freq[s[r] - 'A']);
        
        // If the current window size minus the most frequent character's count is greater than k,
        // we need to shrink the window from the left.
        if (r - l + 1 - maxfreq > k) {
            freq[s[l] - 'A']--;
            l++;
        }
        
        // Update the maximum length of the substring found so far.
        maxlen = max(maxlen, r - l + 1);
        r++;
    }
    return maxlen;
}
int main() {
    string s = "AABABBA";
    int k = 1;
    cout << charcterReplacement(s, k) << endl; 
    return 0;
}