#include <bits/stdc++.h>
using namespace std;
int firstOccurance(vector<int>&nums,int target){
    int n=nums.size(),low=0,high=n-1,first=-1;
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
pair<int,int>firstAndLastOccurance(vector<int>&nums,int target){
    int f=firstOccurance(nums,target);
    if (f==-1 || nums[f]!=target)
    {
        return {-1,-1};
    }
    int l=lastOccurance(nums,target);
    return {f,l};
    
}

int countNumberOfOccurances(vector<int>&nums,int target){
    pair<int,int>ans=firstAndLastOccurance(nums,target);
    if (ans.first==-1)
    {
        return 0;
    }
    return (ans.second-ans.first+1);
}
int main() {
    vector<int>nums={1,2,3,4,5,5,5,6,7};
    int target=5;
    int count=countNumberOfOccurances(nums,target);
    cout << "Count of " << target << " is: " << count << endl;
    
    return 0;
}