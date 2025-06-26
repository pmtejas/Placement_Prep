#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>&nums){
    int ans=0;
    for (auto &&i : nums)
    {
        ans^=i;
    }
    return ans;
}
int main() {
    vector<int>nums={1,1,2,3,3};
    cout<<"Single Number "<<singleNumber(nums);
    return 0;
}