#include <bits/stdc++.h>
using namespace std;
//  Infix to Prefix Conversion using Stack
int precedence(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    if (c == '^') return 3;
    return 0;
}
string infixToPrefix(const string& infix) {
    stack<char> s;
    string prefix = "";
    
    // Reverse the infix expression
    string reversedInfix = string(infix.rbegin(), infix.rend());
    
    for (char c : reversedInfix) {
        if (isalnum(c)) { // If the character is an operand
            prefix += c;
        } else if (c == ')') { // If the character is ')', push it to stack
            s.push(c);
        } else if (c == '(') { // If the character is '(', pop from stack until ')' is found
            while (!s.empty() && s.top() != ')') {
                prefix += s.top();
                s.pop();
            }
            s.pop(); // Pop the ')' from stack
        } else { // If the character is an operator
            while (!s.empty() && precedence(s.top()) > precedence(c)) {
                prefix += s.top();
                s.pop();
            }
            s.push(c); // Push the current operator to stack
        }
    }
    
    // Pop all the operators from the stack
    while (!s.empty()) {
        prefix += s.top();
        s.pop();
    }
    
    // Reverse the prefix expression to get the final result
    reverse(prefix.begin(), prefix.end());
    
    return prefix;
}
int main() {
    string infix = "A+B*(C^D-E)^(F+G*H)-I";
    string prefix = infixToPrefix(infix);
    cout << "Prefix expression is: " << prefix << endl;
    return 0;
}