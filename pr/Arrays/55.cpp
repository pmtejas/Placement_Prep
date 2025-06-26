#include <bits/stdc++.h>
using namespace std;
int sumByCapacity(vector<int>& weights, int capacity) {
    int days = 1, currentWeight = 0;
    for (int weight : weights) {
        if (currentWeight + weight > capacity) {
            days++;
            currentWeight = weight; // Start a new day with the current weight
        } else {
            currentWeight += weight; // Add to the current day's weight
        }
    }
    return days;
}
int leastWeightCapacity(vector<int>& weights, int days) {
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (sumByCapacity(weights, mid) <= days) {
            high = mid - 1; // Try for a smaller capacity
        } else {
            low = mid + 1; // Increase capacity
        }
    }
    return low; // The least weight capacity that can ship within the given days
}
int main() {
    vector<int> weights = {1, 2, 3, 4, 5}; // Example weights
    int days = 2; // Example number of days
    int result = leastWeightCapacity(weights, days);
    cout << "Least weight capacity: " << result << endl;
    return 0;
}