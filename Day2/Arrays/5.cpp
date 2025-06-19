#include <bits/stdc++.h>
using namespace std;
// Stock buy sell for max Profit
// Given an array of stock prices where the ith element is the price of a given stock on day i, find the maximum profit you can achieve.
// You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).
// Note: You cannot sell a stock before you buy one.
// Example: stockPrices = [7, 1, 5, 3, 6, 4]
// Output: 5
int stockBuySell(vector<int>&nums){
    int minPrice=nums[0],ans=0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans=max(ans,nums[i]-minPrice);
        minPrice=min(minPrice,nums[i]);
    }
    return ans;
}
int main() {
    vector<int> stockPrices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << stockBuySell(stockPrices) << endl;
    return 0;
}