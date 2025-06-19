#include <bits/stdc++.h>
using namespace std;
// Permutations of an Array
// Given an array of integers, generate all possible permutations of the array.
// Example: nums = [1, 2, 3]
// Output: [[1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], [3, 2, 1]]
// Explanation: The output contains all possible arrangements of the elements in the array.
void permute(vector<int>&nums, int i, vector<vector<int>>&ans) {
    if (i == nums.size() - 1) {
        ans.push_back(nums);
        return;
    }
    for (int j = i; j < nums.size(); j++) {
        swap(nums[i], nums[j]); // Swap to create a new permutation
        permute(nums, i + 1, ans); // Recur for the next index
        swap(nums[i], nums[j]); // Backtrack to restore the original order
    }
}
vector<vector<int>>permute(vector<int>&nums){
    vector<vector<int>>ans;
    permute(nums, 0, ans);
    return ans;
}
int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = permute(nums);
    cout << "All Permutations: " << endl;
    for (const auto& perm : permutations) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}