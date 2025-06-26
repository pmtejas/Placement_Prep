#include <bits/stdc++.h>
using namespace std;
vector<int>reArrangeArray(vector<int>&nums){
    int n=nums.size(),i=0,j=1;
    vector<int>ans(n);
    for (int k = 0; k < n; k++)
    {
        if (nums[k]>=0)
        {
            ans[i]=nums[k];
            i+=2;
        }
        else
        {
            ans[j]=nums[k];
            j+=2;
        }
    }
    return ans;
}
int main() {
    vector<int>nums={1,2,3,-1,-2,-3};
    nums=reArrangeArray(nums);
    for (auto &&i : nums)
    {
        cout<<i<<" ";
    }
    
    return 0;
}