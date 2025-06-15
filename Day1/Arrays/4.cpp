#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>&nums){
    int i=0,n=nums.size();
    for (int j = 1; j < n; j++)
    {
        if (nums[j]!=nums[i])
        {
            i++;
            swap(nums[i],nums[j]);
        }
    }
    return i+1;
}
int main()
{
    vector<int>nums={1,1,2,2,3,3,4,4};
    cout<<removeDuplicates(nums);
    return 0;
}