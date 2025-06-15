#include<bits/stdc++.h>
using namespace std;
vector<int>firstAndLastOccurance(vector<int>&nums,int target){
    int first=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    if (first==nums.size()|| nums[first]!=target)
    {
        return {-1,-1};
    }
    int last=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
    return {first,last-1};
}
int main()
{
    vector<int>nums={1,2,2,2,3,4};
    nums=firstAndLastOccurance(nums,2);
    for (auto &&i : nums)
    {
        cout<<i<<" ";
    }
    
    return 0;
}