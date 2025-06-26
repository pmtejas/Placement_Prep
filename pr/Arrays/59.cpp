#include <bits/stdc++.h>
using namespace std;
int countPartition(vector<int>&nums,int maxSum){
    int n=nums.size();
    int partition=1;
    long long subArraySum=0;
    for (int i = 0; i < n; i++)
    {
        if (subArraySum+nums[i]<=maxSum)
        {
            subArraySum+=nums[i];
        }
        else
        {
            partition++;
            subArraySum+=nums[i];
        }
    }
    return partition;
}
int splitArrayWithLargestSum(vector<int>&nums,int k){
    int low=*max_element(nums.begin(),nums.end());
    int high=accumulate(nums.begin(),nums.end(),0);
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        int partition=countPartition(nums,mid);
        if (partition>k)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return low;
}
int main() {
    vector<int> nums = {7, 2, 5, 10, 8}; // Example array
    int k = 2; // Example number of partitions
    int result = splitArrayWithLargestSum(nums, k);
    cout << "The minimum largest sum is: " << result << endl;
    return 0;
}