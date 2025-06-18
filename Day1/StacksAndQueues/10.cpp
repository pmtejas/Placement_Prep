#include <bits/stdc++.h>
using namespace std;
//Infix to Postfix Conversion using Stack
int precedence(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    if (c == '^') return 3;
    return 0;
}

string infixToPostfix(const string& infix) {
    stack<char> s;
    string postfix = "";
    
    for (char c : infix) {
        if (isalnum(c)) { // If the character is an operand
            postfix += c;
        } else if (c == '(') { // If the character is '(', push it to stack
            s.push(c);
        } else if (c == ')') { // If the character is ')', pop from stack until '(' is found
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop(); // Pop the '(' from stack
        } else { // If the character is an operator
            while (!s.empty() && precedence(s.top()) >= precedence(c)) {
                postfix += s.top();
                s.pop();
            }
            s.push(c); // Push the current operator to stack
        }
    }
    
    // Pop all the operators from the stack
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }
    
    return postfix;
}

int main() {
    string infix = "a+b*(c^d-e)^(f+g*h)-i";
    string postfix = infixToPostfix(infix);
    cout << "Postfix expression is: " << postfix << endl;
    return 0;
}