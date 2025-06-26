#include <bits/stdc++.h>
using namespace std;
int painterPartition(vector<int>& nums, int k) {
    int n = nums.size();
    if (n < k) return -1; // Not enough boards for each painter

    int low = *max_element(nums.begin(), nums.end()); // Minimum time a painter can take
    int high = accumulate(nums.begin(), nums.end(), 0); // Maximum time a painter can take
    int result = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int paintersRequired = 1, currentBoardLength = 0;

        for (int i = 0; i < n; i++) {
            if (currentBoardLength + nums[i] > mid) {
                paintersRequired++;
                currentBoardLength = nums[i]; // Start new painter's allocation
            } else {
                currentBoardLength += nums[i];
            }
        }

        if (paintersRequired <= k) {
            result = min(result, mid);
            high = mid - 1; // Try to minimize the maximum time
        } else {
            low = mid + 1; // Increase the minimum time
        }
    }
    return result;
}
int main() {
    vector<int> nums = {10, 20, 30, 40}; // Example array of board lengths
    int k = 2; // Example number of painters
    int result = painterPartition(nums, k);
    cout << "The minimum time required is: " << result << endl;
    return 0;
}