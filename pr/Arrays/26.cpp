#include <bits/stdc++.h>
using namespace std;
vector<int>spiralTraversal(vector<vector<int>>&matrix){
    int n=matrix.size(),m=matrix[0].size(),top=0,bottom=n-1,left=0,right=m-1;
    vector<int>ans;
    while (top<=bottom && left<=right)
    {
        for (int i = left; i <=right ; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i <=bottom ; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;
        if (top<=bottom)
        {
            for (int i = right; i >=left ; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if (left<=right)
        {
            for (int i = bottom; i >=top ; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
}
int main() {
    vector<vector<int>>nums={{1,2,3},
                             {4,5,6},
                             {7,8,9}};
    vector<int>ans=spiralTraversal(nums);
    for (auto &&i : ans)
    {
        cout<<i<<" ";
    }
    
    
    return 0;
}