#include<bits/stdc++.h>
using namespace std;
int searchInRotatedSortedArray(vector<int>&nums,int target){
    int n=nums.size(),low=0,high=n-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (nums[mid]==target)
        {
            return mid;
        }
        if (nums[low]<=nums[mid])
        {
            if (nums[low]<=target && target<=nums[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
            
        }
        else
        {
            if (nums[mid]<=target && target<=nums[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int>nums={2,3,4,5,6,1};
    cout<<searchInRotatedSortedArray(nums,1);
    return 0;
}