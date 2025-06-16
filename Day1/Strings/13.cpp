#include<bits/stdc++.h>
using namespace std;
//without using dp
string longestPalindromicSubstring(string s){
    int n = s.size();
    if (n == 0) return "";
    int start = 0, maxLength = 1;

    for (int i = 0; i < n; i++) {
        // Check for odd-length palindromes
        int left = i, right = i;
        while (left >= 0 && right < n && s[left] == s[right]) {
            if (right - left + 1 > maxLength) {
                start = left;
                maxLength = right - left + 1;
            }
            left--;
            right++;
        }

        // Check for even-length palindromes
        left = i;
        right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            if (right - left + 1 > maxLength) {
                start = left;
                maxLength = right - left + 1;
            }
            left--;
            right++;
        }
    }
    return s.substr(start, maxLength);
}
int main()
{
    string s = "babad";
    string result = longestPalindromicSubstring(s);
    cout << "Longest palindromic substring: " << result << endl;

    return 0;
}