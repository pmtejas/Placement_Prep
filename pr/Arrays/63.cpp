#include <bits/stdc++.h>
using namespace std;
int kthElementOfTwoSortedArrays(vector<int>& nums1, vector<int>& nums2, int k) {
    int n = nums1.size(), m = nums2.size();
    if (n > m) return kthElementOfTwoSortedArrays(nums2, nums1, k); // Ensure nums1 is the smaller array

    int low = 0, high = n;
    while (low <= high) {
        int partitionX = (low + high) / 2; // Partitioning nums1
        int partitionY = k - partitionX; // Partitioning nums2

        int maxX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1]; // Maximum of left partition of nums1
        int minX = (partitionX == n) ? INT_MAX : nums1[partitionX]; // Minimum of right partition of nums1

        int maxY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1]; // Maximum of left partition of nums2
        int minY = (partitionY == m) ? INT_MAX : nums2[partitionY]; // Minimum of right partition of nums2

        if (maxX <= minY && maxY <= minX) {
            return max(maxX, maxY); // Found the kth element
        } else if (maxX > minY) {
            high = partitionX - 1; // Move towards left in nums1
        } else {
            low = partitionX + 1; // Move towards right in nums1
        }
    }
    throw invalid_argument("Input arrays are not sorted.");
}
int main() {
    vector<int> nums1 = {2, 3, 6, 7};
    vector<int> nums2 = {1, 4, 5, 8};
    int k = 5; // Example k
    int result = kthElementOfTwoSortedArrays(nums1, nums2, k);
    cout << "The " << k << "th element is: " << result << endl;
    return 0;
}