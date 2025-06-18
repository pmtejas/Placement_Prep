#include <bits/stdc++.h>
using namespace std;
// power set of a number using bit manipulation
vector<vector<int>> powerSet(vector<int>& nums) {
    vector<vector<int>>outer={{}}; // Start with the empty set
    for (int num : nums) {
        int n = outer.size();
        for (int i = 0; i < n; i++) {
            vector<int> subset = outer[i];
            subset.push_back(num); // Add current number to the existing subset
            outer.push_back(subset); // Add the new subset to the power set
        }
    }
    return outer;
}
int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> subsets = powerSet(nums);
    cout << "Power set of {1, 2, 3} is:\n";
    for (const auto& subset : subsets) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}\n";
    }
    return 0;
}