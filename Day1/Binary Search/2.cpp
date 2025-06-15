#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>&nums,int target){
    int n=nums.size(),low=0,high=n-1,ans=n;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (nums[mid]>=target)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;
}
int main()
{
    vector<int>nums={1,2,3,4,5};
    cout<<lowerBound(nums,2);
    return 0;
}