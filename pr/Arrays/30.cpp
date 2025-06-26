#include <bits/stdc++.h>
using namespace std;
vector<int>majorityElement2(vector<int>&nums){
    int ele1=INT_MIN,ele2=INT_MIN,cnt1=0,cnt2=0,n=nums.size();
    for (int i = 0; i < n; i++)
    {
        if (cnt1==0)
        {
            ele1=nums[i];
            cnt1++;
        }
        else if (cnt2==0)
        {
            ele2=nums[i];
            cnt2++;
        }
        else if (ele1==nums[i])
        {
            cnt1++;
        }
        else if (ele2==nums[i])
        {
            cnt2++;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    vector<int>ans;
    cnt1=0,cnt2=0;
    for (int i = 0; i < n; i++)
    {
        if (ele1==nums[i])
        {
            cnt1++;
        }
        if (ele2==nums[i])
        {
            cnt2++;
        }
    }
    if (cnt1>n/3)
    {
        ans.push_back(ele1);
    }
    if (cnt2>n/3)
    {
        ans.push_back(ele2);
    }
    return ans;
}
int main() {
    vector<int>nums={1,2,3,1,1,2,2};
    vector<int>res=majorityElement2(nums);
    for (auto &&i : res)
    {
        cout<<i<<" ";
    }
    return 0;
}