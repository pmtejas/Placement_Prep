#include <bits/stdc++.h>
using namespace std;
// maximum consecutive ones iii
int longestOnes(vector<int>& nums, int k) {
    int n = nums.size();
    int maxlen = 0;
    int l = 0, r = 0;
    int zeroCount = 0;

    while (r < n) {
        if (nums[r] == 0) {
            zeroCount++;
        }

        while (zeroCount > k) {
            if (nums[l] == 0) {
                zeroCount--;
            }
            l++;
        }

        maxlen = max(maxlen, r - l + 1);
        r++;
    }

    return maxlen;
}
int main() {
    vector<int> nums = {1, 1, 0, 0, 1, 1, 0, 1, 1, 1};
    int k = 2;
    int length = longestOnes(nums, k);
    cout << "Length of longest subarray with at most " << k << " zeroes: " << length << endl;
    return 0;
}