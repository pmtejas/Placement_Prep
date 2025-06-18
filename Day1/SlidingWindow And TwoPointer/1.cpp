#include <bits/stdc++.h>
using namespace std;
int lengthOflongestSubstringWithoutRepeatingCharacters(string s) {
    int n=s.length();
    int maxlen=0;
    vector<int>hash(256, -1);
    int l=0,r=0;
    while(r<n) {
        if(hash[s[r]] != -1) {
            l = max(l, hash[s[r]] + 1);
        }
        hash[s[r]] = r;
        maxlen = max(maxlen, r - l + 1);
        r++;
    }
    return maxlen;
}
int main() {
    string s = "abcabcbb";
    int length = lengthOflongestSubstringWithoutRepeatingCharacters(s);
    cout << "Length of longest substring without repeating characters: " << length << endl;
    return 0;
}