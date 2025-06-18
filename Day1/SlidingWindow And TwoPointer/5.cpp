#include <bits/stdc++.h>
using namespace std;
// Count number of subarrays with a given sum problem
// Given an array of integers and a target sum, find the number of contiguous subarrays that sum to the target.
// This can be solved using a sliding window approach.
// Example: nums = [1, 0, 1, 0, 1], goal = 2
// Output: 4
// Explanation: The subarrays that sum to 2 are [1, 0, 1], [0, 1, 0, 1], [1, 0, 1], and [1, 0, 1].
int answer(vector<int>&nums,int goal){
    int l=0,r=0,count=0,sum=0,n=nums.size();
    if (goal < 0) return 0; // If goal is negative, no subarray can have a negative sum.
    while (r < n) {
        sum += nums[r];
        while (sum > goal) {
            sum -= nums[l];
            l++;
        }
        count += r - l + 1; // Count all subarrays ending at r with sum <= goal
        r++;
    }
    return count; // Return the total count of subarrays with sum <= goal
}
int numSubArraysWithSum(vector<int>&nums,int goal){
    return answer(nums,goal)-answer(nums,goal-1);
}
int main() {
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal = 2;
    cout << numSubArraysWithSum(nums, goal) << endl;
    return 0;
}