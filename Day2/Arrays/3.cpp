#include <bits/stdc++.h>
using namespace std;
// majority Element
// Given an array of integers, find the majority element (the element that appears more than n/2 times).
// Example: nums = [2, 2, 1, 1, 1, 2, 2]
// Output: 2
// Explanation: The majority element is 2, which appears 4 times in the array.
int majorityElement(vector<int>& nums) {
    int n=nums.size(),ele=INT_MIN,cnt=0;
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            ele = nums[i];
        } 
        cnt+= (nums[i] == ele) ? 1 : -1;
    }
    return ele;
}
int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element: " << majorityElement(nums) << endl;
    return 0;
}