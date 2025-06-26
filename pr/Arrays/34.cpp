#include <bits/stdc++.h>
using namespace std;
int largestSubarrayWithZeroSum(vector<int>&nums){
    int n=nums.size();
    int pre_Sum=0;
    int ans=0;
    unordered_map<int,int>mp;
    mp[0]=-1; // Initialize the map with 0 at index -1 to handle cases where the subarray starts from index 0
    for (int i = 0; i < n; i++)
    {
        pre_Sum+=nums[i]; // Calculate the prefix sum up to the current index
        if (mp.find(pre_Sum)!=mp.end())
        {
            ans=max(ans,i-mp[pre_Sum]);// If the prefix sum already exists, it means we have found a subarray with zero sum
        }
        else
        {
            mp[pre_Sum]=i; // Store the index of the first occurrence of this prefix sum
        }
    }
    return ans;
}
int main() {
    vector<int>nums={1,2,-2,4,-4,5};
    int result=largestSubarrayWithZeroSum(nums);
    cout << "Largest subarray with zero sum has length: " << result << endl;
    return 0;
}