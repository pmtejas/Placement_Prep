#include<bits/stdc++.h>
using namespace std;
int secondLargest(vector<int>nums){
    int curr=nums[0],prev=-1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i]>curr)
        {
            prev=curr;
            curr=nums[i];
        }
        if (nums[i]>prev && nums[i]!=curr)
        {
            prev=nums[i];
        }
    }
    return prev;
}
int main()
{
    vector<int>nums={1,2,3,4,5};
    cout<<secondLargest(nums);
    return 0;
}