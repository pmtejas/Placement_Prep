#include <bits/stdc++.h>
using namespace std;
// Sort Colors (Dutch National Flag Algorithm)
// Given an array containing 0s, 1s, and 2s, sort the array in-place so that all 0s come first, followed by all 1s, and then all 2s.
// Example: nums = [2, 0, 2, 1, 1, 0]
// Output: [0, 0, 1, 1, 2, 2]
// Explanation: The sorted array has all 0s at the beginning, followed by 1s, and then 2s.
void sortColors(vector<int>&nums){
    int n=nums.size();
    int low=0,mid=0,high=n-1;
    while (mid<=high)
    {
        if (nums[mid]==0)
        {
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}
int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);   
    cout << "Sorted array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}