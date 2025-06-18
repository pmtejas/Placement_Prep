#include <bits/stdc++.h>
using namespace std;
int getOddOccurance(vector<int>&nums,int n){
    int result = 0;
    for(int i = 0; i < n; i++){
        result ^= nums[i]; // XOR operation
    }
    return result; // The number that occurs an odd number of times
}
int main() {
    vector<int> nums = {1, 2, 3, 2, 3, 1, 3};
    int n = nums.size();
    cout << "Number occurring odd times: " << getOddOccurance(nums, n) << endl;
    return 0;
}