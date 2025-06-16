#include<bits/stdc++.h>
using namespace std;
// what is an anagram?
// An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
// For example, "listen" is an anagram of "silent".
bool isValidAnagram(string s,string t){
    unordered_map<char,int>mp;
    if (s.size() != t.size())
    {
        return false; // If lengths differ, they cannot be anagrams
    }
    for (auto &&c : s)
    {
        mp[c]++;
    }
    for (auto &&c : t)
    {
        if (mp.find(c)==mp.end())
        {
            return false;
        }
        mp[c]--;
        if (mp[c]==0)
        {
            mp.erase(c);
        }
    }
    return (mp.size()==0);
}
int main()
{
    string s = "listen";
    string t = "silent";
    if (isValidAnagram(s, t))
    {
        cout << "Strings are anagrams of each other" << endl;
    }
    else
    {
        cout << "Strings are not anagrams of each other" << endl;
    }
    
    return 0;
}