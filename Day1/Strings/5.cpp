#include<bits/stdc++.h>
using namespace std;
//what is isomorphic strings?
// Isomorphic strings are strings that can be transformed into each other by replacing characters in a consistent manner.
// For example, "egg" and "add" are isomorphic because we can replace 'e' with 'a' and 'g' with 'd' in "egg" to get "add".
bool isIsomorphic(string s,string t){
    unordered_map<char,char>mps;
    unordered_map<char,char>mpt;
    for (int i = 0; i < s.size(); i++)
    {
        if (mps.find(s[i])==mps.end() && mpt.find(t[i])==mpt.end())
        {
            mps[s[i]]=t[i];
            mpt[t[i]]=s[i];
        }
        else if (mps[s[i]]!=t[i] || mpt[t[i]]!=s[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s = "egg";
    string t = "add";
    if (isIsomorphic(s, t))
    {
        cout << "Strings are isomorphic" << endl;
    }
    else
    {
        cout << "Strings are not isomorphic" << endl;
    }
    return 0;
}