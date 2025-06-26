#include <bits/stdc++.h>
using namespace std;
int findCeil(vector<int>&nums,int target){
    int n=nums.size(),ans=-1,low=0,high=n-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (nums[mid]>=target)
        {
            ans=nums[mid];
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;
}
int main() {
    vector<int>nums={1,2,4,5};
    cout<<"Ceil of element is "<<findCeil(nums,5);
    return 0;
}