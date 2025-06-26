#include <bits/stdc++.h>
using namespace std;
void moveZeros(vector<vector<int>>&matrix){
    int n=matrix.size(),m=matrix[0].size();
    bool firstRow=false,firstColumn=false;
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][0]==0)
        {
            firstRow=true;
            break;
        }
    }
    for (int j = 0; j < m; j++)
    {
        if (matrix[0][j]==0)
        {
            firstColumn=true;
            break;
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (matrix[i][j]==0)
            {
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (matrix[i][0]==0 || matrix[0][j]==0)
            {
                matrix[i][j]=0;
            }
        }
    }
    if (firstRow)
    {
        for (int i = 0; i < n; i++)
        {
            matrix[i][0]=0;
        }
    }
    if (firstColumn)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[0][j]=0;
        }
    }
}
int main() {
    vector<vector<int>>nums={{1,2,3},{3,0,4},{5,6,7}};
    moveZeros(nums);
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