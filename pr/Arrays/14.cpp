#include <bits/stdc++.h>
using namespace std;
vector<int>twoSum(vector<int>&nums,int target){
    int n=nums.size();
    unordered_map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        int x=target-nums[i];
        if (mp.find(x)!=mp.end())
        {
            return {mp[x],i};
        }
        mp[nums[i]]=i;
    }
    return {-1,-1};
}
int main() {
    vector<int>nums={2,3,4,5,6};
    vector<int>res=twoSum(nums,7);
    for (auto &&i : res)
    {
        cout<<i<<" ";
    }
    

    return 0;
}