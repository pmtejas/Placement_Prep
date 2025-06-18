#include <bits/stdc++.h>
using namespace std;
// Implementaion of stack using Linked List
class StackNode{
public:
    int data;
    StackNode* next;
    int size;
    StackNode(int val) {
        data = val;
        next = nullptr;
    }
};
class Stack {
    StackNode* topNode;
    int size;
public:
    Stack() {
        topNode = nullptr;
        size = 0;
    }

    void push(int x) {
        StackNode* newNode = new StackNode(x);
        newNode->next = topNode;
        topNode = newNode;
        size++;
    }

    int pop() {
        if (topNode == nullptr) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int val = topNode->data;
        StackNode* temp = topNode;
        topNode = topNode->next;
        delete temp;
        size--;
        return val;
    }

    int top() {
        if (topNode == nullptr) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return topNode->data;
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }
    void display() {
        StackNode* current = topNode;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    int peek() {
        if (topNode == nullptr) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return topNode->data;
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Top element is: " << s.peek() << endl;
    cout << "Stack size is: " << s.getSize() << endl;
    s.display();
    cout << "Popped element is: " << s.pop() << endl;
    cout << "Top element after pop is: " << s.peek() << endl;
    cout << "Stack size after pop is: " << s.getSize() << endl;
    s.display();
    return 0;
}