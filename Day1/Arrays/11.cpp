#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>&nums){
    int n=nums.size();
    int actualSum=n*(n+1)/2;
    int optimumSum=0;
    for (auto &&i : nums)
    {
        optimumSum+=i;
    }
    return actualSum-optimumSum;
}
int main()
{
    vector<int>nums={0,1,3,4,5};
    cout<<missingNumber(nums);
    return 0;
}