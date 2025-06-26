#include <bits/stdc++.h>
using namespace std;
void permute(vector<int>&nums,int i,vector<vector<int>>&ans){
    if (i==nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int j = i; j < nums.size(); j++)
    {
        swap(nums[i],nums[j]);
        permute(nums,i+1,ans);
        swap(nums[i],nums[j]);
    }
}
vector<vector<int>>Permutation(vector<int>&nums){
    vector<vector<int>>ans;
    permute(nums,0,ans);
    return ans;
}
int main() {
    vector<int>nums={1,2,3};
    vector<vector<int>>res=Permutation(nums);
    for (auto &&i : res)
    {
        for (auto &&j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}