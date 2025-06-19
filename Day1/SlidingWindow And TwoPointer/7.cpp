#include <bits/stdc++.h>
using namespace std;
// Number of substrings containing all three characters
// Given a string containing only 'a', 'b', and 'c', find the number of substrings that contain at least one of each character.
// Example: s = "abcabc"
// Output: 10
// Explanation: The substrings that contain all three characters are "abc", "bca", "cab", "abc", "bca", "cab", "abc", "bca", "cab", "abc".
int numberOfSubStrings(string s){
    int n=s.size();
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        vector<int>hash(3,0);
        for (int j = i; j < n; j++){
            hash[s[j]-'a']=1;
            if (hash[0]+hash[1]+hash[2]==3) {
                cnt+= n-j; // Count all substrings starting from i to the end of the string
                break; // No need to continue if we already found a valid substring
            } 
        }
    }
    return cnt;
}
int main() {
    string s = "abcabc";
    cout << "Number of substrings containing all three characters: " << numberOfSubStrings(s) << endl;
    return 0;
}