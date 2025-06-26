#include <bits/stdc++.h>
using namespace std;
bool solve(vector<int>&nums,int low,int high){
    if (low>=high)
    {
        return true;
    }
    int mid=low+(high-low)/2;
    if (nums[mid]<=nums[mid+1]&& solve(nums,low,mid)&&solve(nums,mid+1,high))
    {
        return true;
    }
    return false;
}
bool iSorted(vector<int>&nums){
    int n=nums.size();
    return solve(nums,0,n-1);
}
int main() {
    vector<int>nums={54,3,21};
    cout<<(iSorted(nums)?"Is sorted":"Not Sorted");
    return 0;
}