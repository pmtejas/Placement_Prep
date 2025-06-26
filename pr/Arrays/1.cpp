#include <bits/stdc++.h>
using namespace std;
int largest(vector<int>&nums){
    int n=nums.size(),largest=nums[0];
    for (int i = 0; i < n; i++)
    {
        if (nums[i]>largest)
        {
            largest=nums[i];
        }
    }
    return largest;
}

int main() {
    vector<int>nums={1,2,3,4,5,6};
    cout<<"largest Number is "<<largest(nums);
    return 0;
}