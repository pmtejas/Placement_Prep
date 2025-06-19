#include <bits/stdc++.h>
using namespace std;
// Longest Consecutive Elements
// Given an unsorted array of integers, find the length of the longest consecutive elements sequence.
// Example: nums = [100, 4, 200, 1, 3, 2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4], which has a length of 4.
int longestConsecutiveElements(vector<int>&nums){
    int n=nums.size();
    int longest=1;
    int cnt=0;
    unordered_set<int>st;
    for (int i = 0; i < n; i++) {
        st.insert(nums[i]);
    }
    for (auto it : st) {
        if (st.find(it - 1) == st.end()) {
            cnt = 1;
            while (st.find(it + 1) != st.end()) {
                cnt++;
                it++;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}
int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    int longestStreak = longestConsecutiveElements(nums);
    cout << "Longest Consecutive Elements: " << longestStreak << endl;
    return 0;
}