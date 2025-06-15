#include<bits/stdc++.h>
using namespace std;
bool isSortedAndRotated(vector<int>&nums){
    int cnt=0;
    for (int i = 0; i < nums.size()-1; i++)
    {
        if (nums[i]>nums[i+1])
        {
            cnt++;
        }
        
    }
        if (cnt==0)
        {
            return true;
        }
        if (cnt==1 && nums[0]>nums[nums.size()-1])
        {
            return true;
        }
    return false;
}
int main()
{
    vector<int>nums={2,3,4,5,6,1};
    cout<<isSortedAndRotated(nums);
    
    return 0;
}