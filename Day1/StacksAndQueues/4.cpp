#include <bits/stdc++.h>
using namespace std;
//  Implementation of Queue using stack
class Queue {
    stack<int> s1,s2;
public:
    void enqueue(int x) {
        s1.push(x);
    }

    int dequeue() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x = s2.top();
        s2.pop();
        return x;
    }

    int peek() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (s2.empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return s2.top();
    }

    int size() {
        return s1.size() + s2.size();
    }
    int topp() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (s2.empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return s2.top();
    }

};
int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << "Front element is: " << q.peek() << endl;
    cout << "Queue size is: " << q.size() << endl;
    cout << "Dequeued element is: " << q.dequeue() << endl;
    cout << "Front element after dequeue is: " << q.peek() << endl;
    cout << "Queue size after dequeue is: " << q.size() << endl;
    cout << "Top element is: " << q.topp() << endl;
    return 0;
}