#include <bits/stdc++.h>
using namespace std;
int missingK(vector<int>&nums,int k){
   int n=nums.size();
   int low=0,high=n-1;
   while (low<=high)
   {
       int mid=low+(high-low)/2;
       int missing=nums[mid]-(mid+1);// Calculate the number of missing positive integers up to nums[mid]
       if (missing<k)// If the number of missing integers is less than k
       {
           low=mid+1;
       }
       else
       {
           high=mid-1;
       }
   }
   return k+high+1;
}
int main() {
    vector<int> nums = {2, 3, 4, 7, 11}; // Example sorted array
    int k = 5; // Example value for k
    int result = missingK(nums, k);
    cout << "The " << k << "th missing positive integer is: " << result << endl;
    return 0;
}