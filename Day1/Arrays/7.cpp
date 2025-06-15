#include<bits/stdc++.h>
using namespace std;
void leftRotateByKPlaces(vector<int>&nums,int k){
    int n=nums.size();
    k=k%n;
    reverse(nums.begin()+k,nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin(),nums.end());
}
int main()
{
    vector<int>nums={1,2,3,4,5};
    leftRotateByKPlaces(nums,2);
    for (auto &&i : nums)
    {
        cout<<i<<" ";
    }
    
    return 0;
}