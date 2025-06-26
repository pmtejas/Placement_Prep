#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>&nums){
    int n=nums.size(), i=0;
    for (int j = 1; j < n; j++)
    {
        if (nums[i]!=nums[j])
        {
            i++;
            swap(nums[i],nums[j]);
        }
    }
    return i+1;
}
int main() {
    vector<int>nums={1,1,2,2,3,3,3};
    cout<<"Remove Duplicates : "<<removeDuplicates(nums);
    return 0;
}