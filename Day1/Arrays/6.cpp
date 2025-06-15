#include<bits/stdc++.h>
using namespace std;
void rightRotateByKplaces(vector<int>&nums,int k){
    int n=nums.size();
    k=k%n;
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
}
int main()
{
    vector<int>nums={1,2,3,4,5};
    int k=2;
    rightRotateByKplaces(nums,k);
    for (auto &&i : nums)
    {
        cout<<i<<" ";
    }
    
    return 0;
}