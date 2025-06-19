#include <bits/stdc++.h>
using namespace std;
// Rearrange Array Elements 
// Given an array of integers, rearrange the elements such that positive and negative numbers alternate.
// Example: nums = [1, -1, 2, -2, 3, -3, 4, -4]
// Output: [1, -1, 2, -2, 3, -3, 4, -4]
// Explanation: The rearranged array has positive and negative numbers alternating.
vector<int>RearrangeArray(vector<int>&nums){
    int i=0,j=1;
    vector<int>ans(nums.size());
    for (int k = 0; k < nums.size(); k++){
        if (nums[k]>=0) {
            ans[i] = nums[k];
            i += 2; // Place positive numbers at even indices
        } else {
            ans[j] = nums[k];
            j += 2; // Place negative numbers at odd indices
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {-1,-2,-3,1,2,3};
    vector<int> rearranged = RearrangeArray(nums);
    cout << "Rearranged Array: ";
    for (int num : rearranged) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}