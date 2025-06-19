#include <bits/stdc++.h>
using namespace std;
// Next Greater Permutation
// Given an array of integers, find the next greater permutation of the array.
// Example: nums = [1, 2, 3]
// Output: [1, 3, 2]
vector<int>nextGreaterPermutation(vector<int>&nums){
    int n=nums.size(),index=-1;
    for (int i = n-2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        reverse(nums.begin(), nums.end());
        return nums; // Return the smallest permutation (sorted order)
    }
    for (int i = n - 1; i > index; i--) {
        if (nums[i] > nums[index]) {
            swap(nums[i], nums[index]);
            break;
        }
    }
    reverse(nums.begin() + index + 1, nums.end());
    return nums; // Return the next greater permutation
}
int main() {
    vector<int> nums = {1, 2, 3};
    vector<int> nextPermutation = nextGreaterPermutation(nums);
    cout << "Next Greater Permutation: ";
    for (int num : nextPermutation) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}