#include<bits/stdc++.h>
using namespace std;
// sum of beuty of all substrings
// beauty of a substring is defined as the difference between the maximum and minimum frequency of characters in that substring
// Example: "aabcb"
int get_maxmin(vector<int>& freq){
    int maxi = INT_MIN, mini = INT_MAX;
    for(auto it:freq){
        maxi = max(maxi,it);
        if(it!=0)
            mini = min(mini,it);
    }
    return (mini==INT_MAX)?0:maxi-mini;
}    

int beautySum(string s) {
    int ans = 0;
    // 2 loops to generate all substrings
    for(int i=0; i<s.size(); i++){
        vector<int>freq(26,0);
        for(int j=i; j<s.size(); j++){
            freq[s[j]-'a']++;
            int maxmin = get_maxmin(freq);
            ans += maxmin;
        }
    }
    return ans;
}
int main()
{
    string s = "aabcb";
    int result = beautySum(s);
    cout << "Sum of beauty of all substrings: " << result << endl;
    return 0;
}