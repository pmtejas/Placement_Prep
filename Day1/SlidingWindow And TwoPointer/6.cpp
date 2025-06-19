#include <bits/stdc++.h>
using namespace std;
// count the number of nice subarrays
int answer(vector<int>&nums,int k){
    int n=nums.size(),l=0,r=0,count=0;
    if (k<0)
    {
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 == 0) {
            r++;
        } else {
            k--;
            while (k < 0) {
                if (nums[l] % 2 == 1) {
                    k++;
                }
                l++;
            }
            count += r - l + 1; // Count all subarrays ending at i with at most k odd numbers
        }
        
    }
    return count;
}
int numOfSubArrays(vector<int>&nums,int k){
    return answer(nums,k)-answer(nums,k-1);
}
int main() {
    vector<int> nums = {1, 1, 2, 1, 1};
    int k = 3;
    cout << "Number of nice subarrays: " << numOfSubArrays(nums, k) << endl;
    return 0;
}