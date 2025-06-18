#include <bits/stdc++.h>
using namespace std;
// fruit in to basket problem
// Given an array of fruits where each fruit is represented by an integer,
// find the maximum number of fruits that can be collected in two baskets.
// Each basket can only hold one type of fruit, and you can switch the type of fruit in a basket at most once.
// The goal is to find the maximum number of fruits that can be collected in two baskets.
// This can be solved using a sliding window approach with two pointers.
//example: fruits = [1, 2, 1, 2, 3], n = 2
// output: 4  
// Explanation: The maximum number of fruits that can be collected in two baskets is 4.
// In this case, we can collect fruits of type 1 and 2, which gives us a total of 4 fruits.
// The sliding window will expand to include new fruits and contract when more than two types are present.
int totalFruits(int n,vector<int>&fruits){
    unordered_map<int,int>mp;
    int ans=0,start=0;
    for (int i = 0; i < fruits.size(); i++)
    {
        mp[fruits[i]]++;
        while (mp.size() > n) {
            mp[fruits[start]]--;
            if (mp[fruits[start]] == 0) {
                mp.erase(fruits[start]);
            }
            start++;
        }
        if (mp.size() <=2)
        {
            ans = max(ans, i - start + 1);
        }
    }
    return ans;
}
int main() {
    vector<int>fruits={1,2,1,2,3};
    int n=2; // number of types of fruits allowed in baskets
    cout<<totalFruits(n,fruits);
    return 0;
}