#include <bits/stdc++.h>
using namespace std;
// Implementation of Queue using linked list
class QueueNode {
public:
    int data;
    QueueNode* next;
    QueueNode(int val) {
        data = val;
        next = nullptr;
    }
};
class Queue {
    QueueNode* front;
    QueueNode* rear;
    int size;
public:
    Queue() {
        front = nullptr;
        rear = nullptr;
        size = 0;
    }

    void enqueue(int x) {
        QueueNode* newNode = new QueueNode(x);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        size++;
    }

    int dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int val = front->data;
        QueueNode* temp = front;
        front = front->next;
        if (front == nullptr) rear = nullptr; // If queue becomes empty
        delete temp;
        size--;
        return val;
    }

    int peek() {
        if (front == nullptr) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }
    void display() {
        QueueNode* current = front;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};
int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << "Front element is: " << q.peek() << endl;
    cout << "Queue size is: " << q.getSize() << endl;
    q.display();
    cout << "Dequeued element is: " << q.dequeue() << endl;
    cout << "Front element after dequeue is: " << q.peek() << endl;
    cout << "Queue size after dequeue is: " << q.getSize() << endl;
    q.display();
    return 0;
}