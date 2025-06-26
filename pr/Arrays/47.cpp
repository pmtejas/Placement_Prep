#include <bits/stdc++.h>
using namespace std;
int findKRotation(vector<int>&nums){
    int n=nums.size(),low=0,high=n-1,ans=INT_MAX,index=-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (nums[low]<=nums[high])
        {
            if (nums[low]<ans)
            {
                index=low;
                ans=nums[low];
            }
            break;
        }
        if (nums[low]<=nums[mid])
        {
            if (nums[low]<ans)
            {
                index=low;
                ans=nums[low];
            }
            low=mid+1;
        }
        else
        {
            if (nums[mid]<ans)
            {
                index=mid;
                ans=nums[mid];
            }
            high=mid-1;
        }
    }
    return index;
}
int main() {
    vector<int>nums={4,5,6,7,0,1,2};
    int kRotation=findKRotation(nums);
    cout << "Array is rotated " << kRotation << " times." << endl;
    return 0;
}