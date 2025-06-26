#include <bits/stdc++.h>
using namespace std;
vector<int>generatePascal(int n){
    int ans=1;
    vector<int>res;
    for (int i = 1; i <=n; i++)
    {
        res.push_back(ans);
        ans=ans*(n-i+1)/i;
    }
    return res;
}
vector<vector<int>>pascalraingle(int n){
    vector<vector<int>>ans;
    for (int i = 1; i <= n; i++)
    {
        ans.push_back(generatePascal(i));
    }
    return ans;
}
int main() {
    vector<vector<int>>res=pascalraingle(5);
    for (auto &&i : res)
    {
        for (auto &&j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}