#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>&nums,int target){
    int n=nums.size(),low=0,high=n-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (nums[mid]==target)
        {
            return mid;
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
    return -1;
}

int main() {
    vector<int>nums={1,2,3,4,5};
    cout<<"Binary Search of element at index : "<<binarySearch(nums,2);
    return 0;
}