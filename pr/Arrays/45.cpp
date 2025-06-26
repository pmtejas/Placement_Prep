#include <bits/stdc++.h>
using namespace std;
bool searchInRotatedSortedArray2(vector<int>&nums,int target){
    int n=nums.size(),low=0,high=n-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (nums[mid]==target)
        {
            return true;
        }
        if (nums[low]==nums[mid]&& nums[mid]==nums[high])
        {
            low++;
            high--;
            continue;
        }
        if (nums[low]<=nums[mid])
        {
            if (nums[low]<=target && target<=nums[mid])
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else
        {
            if (nums[mid]<=target && target<=nums[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
            
        }
    }
    return false;
}
int main() {
    vector<int>nums={2,5,6,0,0,1,2};
    int target=0;
    bool found=searchInRotatedSortedArray2(nums,target);
    cout << "Element " << (found ? "found" : "not found") << " in the array." << endl;
    return 0;
}