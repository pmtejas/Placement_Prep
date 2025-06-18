#include <bits/stdc++.h>
using namespace std;
// prefix to postfix conversion using stack
int precedence(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    if (c == '^') return 3;
    return 0;
}
string prefixToPostfix(const string& prefix) {
    stack<string> s;
    
    // Traverse the prefix expression from right to left
    for (int i = prefix.length() - 1; i >= 0; i--) {
        char c = prefix[i];
        
        // If the character is an operand, push it to the stack
        if (isalnum(c)) {
            s.push(string(1, c));
        } else { // If the character is an operator
            string op1 = s.top(); s.pop();
            string op2 = s.top(); s.pop();
            string expr = op1 + op2 + c;
            s.push(expr);
        }
    }
    
    // The final expression will be at the top of the stack
    return s.top();
}
int main() {
    string prefix = "*-A/BC-/AKL";
    string postfix = prefixToPostfix(prefix);
    cout << "Postfix expression is: " << postfix << endl;
    return 0;
}