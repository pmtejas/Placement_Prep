#include <bits/stdc++.h>
using namespace std;
bool searchInRowWiseAndColumnWiseSortedMatrix(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
    if (n == 0) return false;
    int m = matrix[0].size();
    
    int row = 0, col = m - 1; // Start from the top-right corner
    
    while (row < n && col >= 0) {
        if (matrix[row][col] == target) {
            return true; // Found the target
        } else if (matrix[row][col] > target) {
            col--; // Move left
        } else {
            row++; // Move down
        }
    }
    
    return false; // Target not found
}
int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int target = 7;

    if (searchInRowWiseAndColumnWiseSortedMatrix(matrix, target)) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}