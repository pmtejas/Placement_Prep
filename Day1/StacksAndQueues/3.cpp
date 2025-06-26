#include <bits/stdc++.h>
using namespace std;
// Implementation of stack using queue
class Stack{
    queue<int>q1;
    public:
        void push(int x){
            int s=q1.size();
            q1.push(x);
            for (int i = 0; i < s; i++)
            {
                q1.push(q1.front());
                q1.pop();
            }
        }
        int pop(){
            int n=q1.front();
            q1.pop();
            return n;
        }
        int top(){
            return q1.front();
        }
        int size(){
            return q1.size();
        }
        int peek(){
            if(q1.empty()){
                cout << "Stack is empty" << endl;
                return -1;
            }
            return q1.front();
        }
};
int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Top element is: " << s.top() << endl;
    cout << "Stack size is: " << s.size() << endl;
    cout << "Popped element is: " << s.pop() << endl;
    cout << "Top element after pop is: " << s.top() << endl;
    cout << "Stack size after pop is: " << s.size() << endl;
    cout << "Peek element is: " << s.peek() << endl;
    cout << "Final stack size is: " << s.size() << endl;
    return 0;
}