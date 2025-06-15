#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>&nums,int target){
    int n=nums.size();
    int low=0,high=n-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (target==nums[mid])
        {
            return mid;
        }
        else if (target>nums[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
    vector<int>nums={1,2,3,4,5,6};
    cout<<binarySearch(nums,7);
    
    return 0;
}