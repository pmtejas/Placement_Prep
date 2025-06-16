#include<bits/stdc++.h>
using namespace std;
int maxDepthOfParenthesis(string s){
    int opened=0,ans=0;
    for (auto &&i : s)
    {
        if (i=='(')
        {
            opened++;
            ans=max(ans,opened);
        }
        else if (i==')')
        {
            opened--;
        }
    }
    return ans;
}
int main()
{
    string s = "((1+(2*3))+((8)/4))+1";
    cout << "Maximum depth of parenthesis: " << maxDepthOfParenthesis(s) << endl;
    
    return 0;
}