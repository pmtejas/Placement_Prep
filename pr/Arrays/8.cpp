#include <bits/stdc++.h>
using namespace std;
vector<int>moveZeros(vector<int>&nums){
    int n=nums.size(),j=-1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i]==0)
        {
            j=i;
            break;
        }
    }
    if (j==-1)
    {
        return nums;
    }
    for (int i = j+1; i < n; i++)
    {
        if (nums[i]!=0)
        {
            swap(nums[i],nums[j]);
            j++;
        }
    }
    return nums;
    
}
int main() {
    vector<int>nums={1,0,2,0,3,0,3,0};
    nums=moveZeros(nums);
    for (auto &&i : nums)
    {
        cout<<i<<" ";
    }
    
    return 0;
}