#include <bits/stdc++.h>
using namespace std;
//Two Sum Problem
// Given an array of integers and a target integer, find two indices such that the numbers at those indices add up to the target.
// Example: nums = [2, 7, 11, 15], target = 9
// Output: [0, 1]
vector<int>TwoSum(vector<int>&nums,int target){
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
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = TwoSum(nums, target);
    if (result[0] != -1) {
        cout << "Indices of the two numbers that add up to " << target << ": [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No two numbers add up to the target." << endl;
    }
    
    return 0;
}