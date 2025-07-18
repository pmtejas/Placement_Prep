#include<bits/stdc++.h>
using namespace std;
int myAtoi(string s){
    int i=0, sign=1, result=0;
    while(i<s.size() && s[i]==' ') i++; // skip leading spaces
    
    if(i<s.size() && (s[i]=='-' || s[i]=='+')) {
        sign = (s[i]=='-') ? -1 : 1;
        i++;
    }
    
    while(i<s.size() && isdigit(s[i])) {
        int digit = s[i] - '0';
        
        // Check for overflow
        if(result > (INT_MAX - digit) / 10) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }
        
        result = result * 10 + digit;
        i++;
    }
    
    return result * sign;
}
int main()
{
    string s="123";
    cout<<myAtoi(s);
    
    return 0;
}