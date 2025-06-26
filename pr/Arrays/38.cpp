#include <bits/stdc++.h>
using namespace std;
int floor(vector<int>&nums,int target){
    int n=nums.size(),ans=-1,low=0,high=n-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (nums[mid]<=target)
        {
            ans=nums[mid];
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return ans;
}
int main() {
    vector<int>nums={1,2,4,5};
    cout<<"Floor of the element is "<<floor(nums,3);
    return 0;
}