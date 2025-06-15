#include<bits/stdc++.h>
using namespace std;
int firstOccurance(vector<int>&nums,int target){
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
int lastOccurance(vector<int>&nums,int target){
    int n=nums.size(),low=0,high=n-1,ans=n;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (nums[mid]>target)
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
pair<int,int>firstAndLastOccurance(vector<int>&nums,int target){
    int first=firstOccurance(nums,target);
    if (first==nums.size()|| nums[first]!=target)
    {
        return {-1,-1};
    }
    int last=lastOccurance(nums,target);
    return make_pair(first,last-1);
}
int countTheNumberOfOccurances(vector<int>&nums,int target){
    pair<int,int>ans=firstAndLastOccurance(nums,target);
    if (ans.first==-1)
    {
        return 0;
    }
    return (ans.second-ans.first+1);
}
int main()
{
    vector<int>nums={1,2,2,2,3,4,5};
    cout<<countTheNumberOfOccurances(nums,2);
    
    return 0;
}