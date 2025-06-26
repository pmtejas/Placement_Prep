#include <bits/stdc++.h>
using namespace std;
vector<int>leadersInArray(vector<int>&nums){
    int n=nums.size();
    vector<int>ans;
    int maxi=INT_MIN;
    for (int i = n-1; i >=0; i--)
    {
        while (nums[i]>maxi)
        {
            maxi=nums[i];
            ans.push_back(maxi);
        }
        maxi=max(nums[i],maxi);
    }
    return ans;
}
int main() {
    vector<int>nums={1,2,3,4,8,3,7};
    vector<int>res=leadersInArray(nums);
    for (auto &&i : res)
    {
        cout<<i<<" ";
    }
    
    return 0;
}