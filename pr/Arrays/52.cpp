#include <bits/stdc++.h>
using namespace std;
int kokoEatBananas(vector<int>&nums,int hour){
    int low=1,high=*max_element(nums.begin(),nums.end());
    int ans=high;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        long long totalHours=0;
        for (int i = 0; i < nums.size(); i++)
        {
            totalHours+=ceil((double)nums[i]/mid);
        }
        if (totalHours<=hour)
        {
            ans=min(ans,mid);
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;
}

int main() {
    vector<int>nums={3,6,7,11};
    int hour=8; // Example value for hour
    int result=kokoEatBananas(nums,hour);
    cout << "The minimum eating speed is: " << result <<" bananas per hour." << endl;
    return 0;
}