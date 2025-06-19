#include <bits/stdc++.h>
using namespace std;
// leader in an array
// A leader is an element which is greater than all the elements to its right.
// Given an array of integers, find all the leaders in the array.
// Example: nums = [16, 17, 4, 3, 5, 2]
// Output: [17, 5, 2]
// Explanation: The leaders in the array are 17, 5, and 2.
vector<int>leaderInArray(vector<int>&nums){
int maxi=INT_MIN,n=nums.size();
vector<int>ans;
for (int i = n-1; i >= 0; i--) {
    if (nums[i] > maxi) {
        ans.push_back(nums[i]);
        maxi = nums[i];
    }
    maxi = max(maxi, nums[i]);
}
    return ans;
}
int main() {
    vector<int> nums = {16, 17, 4, 3, 5, 2};
    vector<int> leaders = leaderInArray(nums);
    cout << "Leaders in the array: ";
    for (int leader : leaders) {
        cout << leader << " ";
    }
    cout << endl;
    return 0;
}