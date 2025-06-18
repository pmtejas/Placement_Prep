#include <bits/stdc++.h>
using namespace std;
// Implementation of Max Stack
class MaxStack {
    stack<int> st;
    stack<int> maxSt;
public:
    MaxStack() {
        while(!st.empty()) {
            st.pop();
        }
        while(!maxSt.empty()) {
            maxSt.pop();
        }
    }

    void push(int x) {
        st.push(x);
        if (maxSt.empty() || x >= maxSt.top()) {
            maxSt.push(x);
        }
    }

    void pop() {
        if (st.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        int topElement = st.top();
        st.pop();
        if (topElement == maxSt.top()) {
            maxSt.pop();
        }
    }

    int top() {
        if (st.empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return st.top();
    }

    int getMax() {
        if (maxSt.empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return maxSt.top();
    }
};
int main() {
    MaxStack s;
    s.push(3);
    s.push(5);
    cout << "Maximum element is: " << s.getMax() << endl;
    s.push(2);
    s.push(8);
    cout << "Maximum element is: " << s.getMax() << endl;
    s.pop();
    cout << "Top element is: " << s.top() << endl;
    cout << "Maximum element is: " << s.getMax() << endl;
    return 0;
}