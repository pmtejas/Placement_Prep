#include <bits/stdc++.h>
using namespace std;
// postfix to infix conversion using stack
int precedence(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    if (c == '^') return 3;
    return 0;
}
string postfixToInfix(const string& postfix) {
    stack<string> s;
    
    // Traverse the postfix expression from left to right
    for (char c : postfix) {
        // If the character is an operand, push it to the stack
        if (isalnum(c)) {
            s.push(string(1, c));
        } else { // If the character is an operator
            string op2 = s.top(); s.pop();
            string op1 = s.top(); s.pop();
            string expr = "(" + op1 + " " + c + " " + op2 + ")";
            s.push(expr);
        }
    }
    
    // The final expression will be at the top of the stack
    return s.top();
}
int main() {
    string postfix = "ABC/-AK/L-*";
    string infix = postfixToInfix(postfix);
    cout << "Infix expression is: " << infix << endl;
    return 0;
}