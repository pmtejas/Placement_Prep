#include <bits/stdc++.h>
using namespace std;
vector<int>findPeak(vector<vector<int>>&matrix){
    int n=matrix.size(),m=matrix[0].size();
    int low=0,high=m-1;
    vector<int>ans;
    while (low<m && high>=0)
    {
        int mid=low+(high-low)/2;
        if ((mid==0 || matrix[low][mid]>=matrix[low][mid-1]) && (mid==m-1 || matrix[low][mid]>=matrix[low][mid+1]))
        {
            ans.push_back(matrix[low][mid]);
            low++;
        }
        else if (mid>0 && matrix[low][mid-1]>matrix[low][mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;
}
int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {6, 5, 4},
        {7, 8, 9}
    };

    vector<int> peaks = findPeak(matrix);
    if (peaks.empty()) {
        cout << "No peak found." << endl;
    } else {
        cout << "Peaks found: ";
        for (int peak : peaks) {
            cout << peak << " ";
        }
        cout << endl;
    }

    return 0;
}