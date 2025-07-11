#include <bits/stdc++.h>
using namespace std;
void rotateMatrixBy90(vector<vector<int>>&matrix){
    int n=matrix.size(),m=matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
}
int main() {
    vector<vector<int>>nums={{1,2,3},{4,5,6},{7,8,9}};
    rotateMatrixBy90(nums);
    for (auto &&i : nums)
    {
        for (auto &&j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}