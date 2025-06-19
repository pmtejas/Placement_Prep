#include <bits/stdc++.h>
using namespace std;
// subarrays with k differnrt integers
// Given an array of integers and an integer k, find the number of subarrays that contain exactly k distinct integers.
// Example: nums = [1, 2, 1, 2, 3], k = 2
// Output: 7
// Explanation: The subarrays with exactly 2 distinct integers are [1, 2], [2, 1], [1, 2], [2, 3], [1, 2, 1], [2, 1, 2], and [1, 2, 3].
// This can be solved using the sliding window technique.
int subarraysWithKDistinct(vector<int>& nums, int k) {
    int n = nums.size();
    if (k == 0) return 0;

    auto atMostK = [&](int k) {
        unordered_map<int, int> count;
        int l = 0, r = 0, res = 0;
        while (r < n) {
            count[nums[r]]++;
            while (count.size() > k) {
                count[nums[l]]--;
                if (count[nums[l]] == 0) {
                    count.erase(nums[l]);
                }
                l++;
            }
            res += r - l + 1;
            r++;
        }
        return res;
    };

    return atMostK(k) - atMostK(k - 1);
}
int main() {
    vector<int> nums = {1, 2, 1, 2, 3};
    int k = 2;
    cout << "Number of subarrays with exactly " << k << " distinct integers: " << subarraysWithKDistinct(nums, k) << endl;
    return 0;
}