#include <bits/stdc++.h>
using namespace std;
// check for balanced parentheses using stack
bool isBalanced(string expr) {
    stack<char> s;
    for (char c : expr) {
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        } else {
            if (s.empty()) return false;
            char ch = s.top();
            if ((c == ')' && ch != '(') || 
                (c == '}' && ch != '{') || 
                (c == ']' && ch != '[')) {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}
int main() {
    string expr = "{[()]}";
    if (isBalanced(expr)) {
        cout << "Balanced" << endl;
    } else {
        cout << "Not Balanced" << endl;
    }
    return 0;
}