#include<bits/stdc++.h>
using namespace std;
// Given a string S, sort it in decreasing order based on the frequency of characters.
// example:
// Input: S = "tree"
// Output: "eert"
// Explanation: 'e' appears twice while 't' and 'r' both appear once, so the sorted order is "eetr".
string frequencySort(string S){
    unordered_map<char,int>mp;
    for (auto &&c : S)
    {
        mp[c]++;
    }
    priority_queue<pair<int,char>>pq;
    for (auto &&it : mp)
    {
        pq.push({it.second,it.first});
    }
    string ans=" ";
    while (!pq.empty())
    {
        auto curr=pq.top();
        pq.pop();
        ans.append(curr.first,curr.second);
    }
    return ans;
}
int main()
{
    string S = "tree";
    cout << frequencySort(S) << endl;
    return 0;
}