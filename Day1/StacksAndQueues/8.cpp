#include <bits/stdc++.h>
using namespace std;
// Implement Min Stack
class MinStack {
    stack<long long> st;
    long long minElement;
public:
    MinStack() {
        while(st.empty()==false) {
            st.pop();
        }
        minElement = INT_MAX;
    }
    void push(int x) {;
        if (st.empty()) {
            minElement = x;
            st.push(x);
        } else {
            if (x < minElement) {
                st.push(2LL * x - minElement);
                minElement = x;
            } else {
                st.push(x);
            }
        }
    }
    void pop() {
        if (st.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        long long topElement = st.top();
        st.pop();
        if (topElement < minElement) {
            minElement = 2 * minElement - topElement;
        }
    }
    int top() {
        if (st.empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        long long topElement = st.top();
        if (topElement < minElement) {
            return minElement;
        } else {
            return topElement;
        }
    }
    int getMin() {
        if (st.empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return minElement;
    }
};

int main() {
    MinStack s;
    s.push(3);
    s.push(5);
    cout << "Minimum element is: " << s.getMin() << endl;
    s.push(2);
    s.push(1);
    cout << "Minimum element is: " << s.getMin() << endl;
    s.pop();
    cout << "Top element is: " << s.top() << endl;
    cout << "Minimum element is: " << s.getMin() << endl;
    return 0;
}