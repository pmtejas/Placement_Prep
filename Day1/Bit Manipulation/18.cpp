#include <bits/stdc++.h>
using namespace std;
// single Number III
vector<int>singleNumber(vector<int>&nums){
    unordered_map<int,int>mp;
    for (auto &&i : nums) {
        mp[i]++;
    }
    vector<int>ans;
    for (auto &&i : mp) {
        if (i.second == 1) {
            ans.push_back(i.first);
        }
    }
    return ans;
}
int main() {
    vector<int> nums = {4, 1, 2, 1, 2, 5, 5};
    vector<int> result = singleNumber(nums);
    cout << "Single numbers are: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}