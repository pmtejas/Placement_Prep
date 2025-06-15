#include<bits/stdc++.h>
using namespace std;
int consecutiveOnes(vector<int>&nums){
    int n=nums.size();
    int cnt;
    int ans=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cnt=0;
        while (i<n && nums[i]==1)
        {
            cnt++;
            i++;
        }
        ans=max(ans,cnt);
    }
    return ans;
}
int main()
{
    vector<int>nums={1,1,2,1,1,1,3,1,1,1,1,4};
    cout<<consecutiveOnes(nums);
    
    return 0;
}