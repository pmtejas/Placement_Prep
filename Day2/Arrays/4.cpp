#include <bits/stdc++.h>
using namespace std;
// kadane's algorithm
// Given an array of integers, find the maximum sum of a contiguous subarray.
// Example: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
int maxSubArraySum(vector<int>&nums){
    int n=nums.size(),max_Sum=INT_MIN,sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=max(nums[i],sum+nums[i]);
        max_Sum=max(max_Sum,sum);
    }
    return max_Sum;
}
int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << "Maximum Subarray Sum: " << maxSubArraySum(nums) << endl;
    return 0;
}