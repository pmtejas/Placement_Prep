#include<bits/stdc++.h>
using namespace std;
int findKRotations(vector<int>&nums){
    int n=nums.size(),low=0,high=n-1;
    int ans=INT_MAX;
    int index=-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (nums[low]<=nums[high])
        {
            if (nums[low]<ans)
            {
                index=low;
                ans=nums[low];
            }
            break;
        }
        if (nums[low]<=nums[mid])
        {
            if (nums[low]<ans)
            {
                index=low;
                ans=nums[low];
            }
            low=mid+1;
        }
        else
        {
            if (nums[mid]<ans)
            {
                index=mid;
                ans=nums[mid];
            }
            high=mid-1;
        }
    }
    return index;
}
int main()
{
    vector<int>nums={4,5,6,1,2,3};
    cout<<findKRotations(nums);
    
    return 0;
}