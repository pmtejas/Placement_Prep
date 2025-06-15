#include<bits/stdc++.h>
using namespace std;
int largestNumber(vector<int>&nums){
    int largest=nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i]>largest)
        {
            largest=nums[i];
        }
    }
    return largest;
}
int main()
{
    vector<int>nums={1,2,3,4,5};
    cout<<largestNumber(nums); 
    return 0;
}