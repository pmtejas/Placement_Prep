#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>nums){
    int n=nums.size(),ele=INT_MIN,cnt=0;
    for (int i = 0; i < n; i++)
    {
        if (cnt==0)
        {
            ele=nums[i];
        }
        cnt+=(ele==nums[i])?1:-1;
    }
    return ele;
}
int main() {
    vector<int>nums={1,1,2,3,3,3};
    cout<<"majority element is : "<<majorityElement(nums);
    return 0;
}