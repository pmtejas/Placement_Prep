#include<bits/stdc++.h>
using namespace std;
void leftRotateByOnePlace(vector<int>&nums){
    int n=nums.size();
    int temp=nums[0];
    for (int i = 0; i < n; i++)
    {
        nums[i]=nums[i+1];
    }
    nums[n-1]=temp;
}
int main()
{
    vector<int>nums={1,2,3,4,5,6};
    leftRotateByOnePlace(nums);
    for (auto &&i : nums)
    {
        cout<<i<<" ";
    }
    
    return 0;
}