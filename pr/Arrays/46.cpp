#include <bits/stdc++.h>
using namespace std;
int findMinInRotatedSortedArray(vector<int>&nums){
    int n=nums.size(),low=0,high=n-1,ans=INT_MAX;
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
            ans=min(nums[low],ans);
            low=mid+1;
        }
        else
        {
            ans=min(nums[mid],ans);
            high=mid-1;
        }
    }
    return ans;
}
int main() {
    vector<int>nums={4,5,6,7,0,1,2};
    int minElement=findMinInRotatedSortedArray(nums);
    cout << "Minimum element in the rotated sorted array: " << minElement << endl;
    return 0;
}