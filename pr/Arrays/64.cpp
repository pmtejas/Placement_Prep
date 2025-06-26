#include <bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>&nums,int n,int target){
    int low=0,high=n-1,ans=n;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (nums[mid]>=target)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;
}
int rowWithMax1s(vector<vector<int>>&matrix){
    int n=matrix.size(),m=matrix[0].size(),cnt_max=0,index=-1;
    for (int i = 0; i < n; i++)
    {
        int cnt_ones=m-lowerBound(matrix[i],m,1);
        if (cnt_ones>cnt_max)
        {
            cnt_max=cnt_ones;
            index=i;
        }
    }
    return index;
}

int main() {
    vector<vector<int>>matrix = {
        {0, 0, 1, 1},
        {0, 1, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };

    int rowIndex = rowWithMax1s(matrix);
    if (rowIndex == -1) {
        cout << "No row with 1s found." << endl;
    } else {
        cout << "Row index with maximum 1s: " << rowIndex << endl;
    }
    return 0;
}