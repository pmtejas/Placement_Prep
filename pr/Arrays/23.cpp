#include <bits/stdc++.h>
using namespace std;
int longestconsecutiveElements(vector<int>&nums){
    int longest=1;
    int cnt=0;
    unordered_set<int>st;
    for (auto &&i : nums)
    {
        st.insert(i);
    }
    for (auto &&i : st)
    {
        if (st.find(i-1)==st.end())
        {
            cnt=1;
            int x=i;
            while (st.find(x+1)!=st.end())
            {
                cnt++;
                x=x+1;
            }
            longest=max(longest,cnt);
        }
    }
    return longest;
    
}
int main() {
    vector<int>nums={1,2,3,4,5,97,96,95,6};
    cout<<"Longest Consecutive Elements is : "<<longestconsecutiveElements(nums);
    return 0;
}