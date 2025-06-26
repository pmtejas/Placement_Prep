#include <bits/stdc++.h>
using namespace std;
int longestConsecutiveOnes(vector<int>&nums){
    int n=nums.size();
    int ans=INT_MIN;
    int cnt;
    for (int i = 0; i < n; i++)
    {
        cnt=0;
        while (i<n&& nums[i]==1)
        {
            cnt++;
            i++;
        }
        ans=max(cnt,ans);
    }
    return ans;
}
int main() {
    vector<int>nums={1,2,1,1,1,3,1,1,4,1,5,1,1,1,1};
    cout<<"Longest consecutive Ones are : "<<longestConsecutiveOnes(nums);
    return 0;
}