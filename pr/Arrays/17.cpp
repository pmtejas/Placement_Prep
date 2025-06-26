#include <bits/stdc++.h>
using namespace std;
int maxSubArraySum(vector<int>&nums){
    int n=nums.size();
    int sum=0;
    int max_Sum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum=max(sum,sum+nums[i]);
        max_Sum=max(sum,max_Sum);
    }
    return max_Sum;
}
int main() {
    vector<int>nums={1,2,-3,4,5};
    cout<<"Max Sum of Subbaray (Kadane Algo ): "<<maxSubArraySum(nums);
    return 0;
}