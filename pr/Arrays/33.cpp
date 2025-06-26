#include <bits/stdc++.h>
using namespace std;
int subArrayswithSum(vector<int>&nums,int k){
    int xr=0;
    unordered_map<int,int>mp;
    mp[xr]++;
    int cnt=0;
    for (int i = 0; i < nums.size(); i++)
    {
        xr=xr^nums[i];//what happens here is that we are calculating the XOR of all elements from the start to the current index.
        int x=xr^k;//we are calculating the XOR of the current XOR with k, this gives us the XOR we need to find in the map.
        cnt+=mp[x];//we are checking if this XOR exists in the map, if it does, we add its frequency to the count.
        mp[xr]++;//we are adding the current XOR to the map, this is done so that we can use it for the next iterations.
    }
    return cnt;
}
int main() {
    vector<int>nums={1,2,3,4,5};
    int k=5;
    int result=subArrayswithSum(nums,k);
    cout << "Number of subarrays with XOR " << k << ": " << result << endl;
    return 0;
}