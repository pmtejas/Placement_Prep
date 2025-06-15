#include<bits/stdc++.h>
using namespace std;
int findMinElementInRotatedSortedArray(vector<int>&nums){
    int n=nums.size(),low=0,high=n-1;
    int ans=INT_MAX;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (nums[low]<=nums[high])
        {
            ans=min(ans,nums[low]);
            break;
        }
        if (nums[low]<=nums[mid])
        {
            ans=min(ans,nums[low]);
            low=mid+1;
        }
        else
        {
            ans=min(ans,nums[mid]);
            high=mid-1;
        }
    }
    return ans;
}
int main()
{
    vector<int>nums={2,3,4,5,6,1};
    cout<<findMinElementInRotatedSortedArray(nums);
    return 0;
}