#include <bits/stdc++.h>
using namespace std;
int stockBuySellForMaxProfit(vector<int>&nums){
    int n=nums.size();
    int ans=INT_MIN;
    int minPrice=nums[0];
    for (int i = 0; i < n; i++)
    {
        ans=max(nums[i],nums[i]-minPrice);
        minPrice=min(nums[i],minPrice);
    }
    return ans;
}
int main() {
    vector<int>nums={7,1,3,4,6,5};
    cout<<"Max Profit is "<<stockBuySellForMaxProfit(nums);
    return 0;
}