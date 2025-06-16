#include<bits/stdc++.h>
using namespace std;
string removeOuterMostParenthesis(string s){
    string res;
    int balance=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='(')
        {
            if (balance>0)
            {
                res+=s[i];
            }
            balance++;
        }
        else
        {
            balance--;
            if (balance>0)
            {
                res+=s[i];
            }
        }
    }
    return res;
}
int main()
{
    string input="((()))";
    string result = removeOuterMostParenthesis(input);
    cout<<result;
    return 0;
}