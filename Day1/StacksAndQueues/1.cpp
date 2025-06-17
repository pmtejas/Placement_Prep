#include<bits/stdc++.h>
using namespace std;
// implementation of stack using array
class Stack {
    int top;
    int capacity;
    int* array;
public:
    Stack(int size) {
        capacity = size;
        top = -1;
        array = new int[capacity];
    }

    ~Stack() {
        delete[] array;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int item) {
        if (isFull()) {
            cout << "Stack overflow\n";
            return;
        }
        array[++top] = item;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow\n";
            return -1; // or throw an exception
        }
        return array[top--];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1; // or throw an exception
        }
        return array[top];
    }
};
int main()
{
    Stack stack(5);

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element is: " << stack.peek() << endl;

    cout << "Popped element is: " << stack.pop() << endl;

    if (stack.isEmpty()) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack is not empty\n";
    }
    stack.push(40);
    stack.push(50);
    stack.push(60); // This will show stack overflow since capacity is 5
    cout << "Top element after pushing 40, 50, and 60: " << stack.peek() << endl;
    cout << "Popped element is: " << stack.pop() << endl;
    cout << "Top element after popping: " << stack.peek() << endl;
    return 0;
}