#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int>&nums,int low,int high){
    if (low>=high)
    {
        return true;
    }
    int mid=low+(high-low)/2;
    if (nums[mid]<=nums[mid+1] && solve(nums,low,mid)&&solve(nums,mid+1,high))
    {
        return true;
    }
    return false;
}
bool checkIfTheArrayIsSortedOrNot(vector<int>&nums){
    int n=nums.size();
    int low=0,high=n-1;
    return solve(nums,low,high);
}
int main()
{
    vector<int>nums={1,2,3,4,5};
    cout<<checkIfTheArrayIsSortedOrNot(nums);
    
    return 0;
}