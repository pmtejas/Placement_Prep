#include <bits/stdc++.h>
using namespace std;
// maximum points you can obtain from cards
// Given an array of integers representing points on cards and an integer k, find the maximum points you can obtain by picking k cards from either end of the array.
// Example: cardPoints = [1, 2, 3, 4, 5, 6, 1], k = 3
// Output: 12
// Explanation: The maximum points can be obtained by picking cards 5, 6, and 1 from the right end.
// The sum is 5 + 6 + 1 = 12.
int maxScore(vector<int>& cardPoints, int k) {
    int n = cardPoints.size();
    if (k >= n) return accumulate(cardPoints.begin(), cardPoints.end(), 0);
    
    int total = accumulate(cardPoints.begin(), cardPoints.end(), 0);
    int windowSum = accumulate(cardPoints.begin(), cardPoints.begin() + n - k, 0);
    int minWindowSum = windowSum;
    
    for (int i = n - k; i < n; ++i) {
        windowSum += cardPoints[i] - cardPoints[i - (n - k)];
        minWindowSum = min(minWindowSum, windowSum);
    }
    
    return total - minWindowSum;
}
int main() {
    vector<int> cardPoints = {1, 2, 3, 4, 5, 6, 1};
    int k = 3;
    cout << "Maximum points you can obtain from cards: " << maxScore(cardPoints, k) << endl;
    return 0;
}