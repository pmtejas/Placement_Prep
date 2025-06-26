#include <bits/stdc++.h>
using namespace std;
int sumbyD(vector<int>&nums,int div){
    int n=nums.size(),sum=0;
    for (int i = 0; i <n; i++)
    {
        sum+=ceil((double)(nums[i])/(double)(div));
    }
    return sum;
}
int smallestDivisor(vector<int>&nums,int limit){
    int n=nums.size();
    if(n>limit)return -1;
    int low=1,high=*max_element(nums.begin(),nums.end());
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if(sumbyD(nums,mid)<=limit){
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return low;
}
int main() {
    vector<int>nums={1,2,5,9};
    int limit=6; // Example value for limit
    int result=smallestDivisor(nums, limit);
    cout << "The smallest divisor is: " << result << endl;
    return 0;
}