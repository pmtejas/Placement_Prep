#include <bits/stdc++.h>
using namespace std;
int firstOccurance(vector<int>&nums,int target){
    int n=nums.size(),first=-1,low=0,high=n-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (nums[mid]==target)
        {
            first=mid;
            high=mid-1;
        }
        else if (nums[mid]>target)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return first;
}
int lastOccurance(vector<int>&nums,int target){
    int n=nums.size(),low=0,high=n-1,last=-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (nums[mid]==target)
        {
            last=mid;
            low=mid+1;
        }
        else if (nums[mid]>target)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return last;
}
vector<int>firstAndLastOccurance(vector<int>&nums,int target){
    int f=firstOccurance(nums,target);
    if (f==-1 || nums[f]!=target)
    {
        return {-1,-1};
    }
    int l=lastOccurance(nums,target);
    return {f,l};
    
}
int main() {
    vector<int>nums={1,2,3,4,5,5,5,6,7};
    int target=5;
    vector<int>result=firstAndLastOccurance(nums,target);
    for (size_t i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    
    return 0;
}