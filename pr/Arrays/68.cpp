#include <bits/stdc++.h>
using namespace std;
int median(vector<vector<int>>& matrix) {
    int n = matrix.size();
    if (n == 0) return 0;
    int m = matrix[0].size();
    
    // Binary search for the median
    int low = 1, high = 1e9; // Assuming the range of elements in the matrix
    int medianPos = (n * m + 1) / 2; // Position of the median in a sorted array

    while (low < high) {
        int mid = low + (high - low) / 2;
        int count = 0;

        // Count numbers less than or equal to mid
        for (int i = 0; i < n; i++) {
            count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
        }

        if (count < medianPos) {
            low = mid + 1; // Move to the right half
        } else {
            high = mid; // Move to the left half
        }
    }
    
    return low; // The median value
}
int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5},
        {2, 4, 6},
        {7, 8, 9}
    };

    int med = median(matrix);
    cout << "Median is: " << med << endl;

    return 0;
}