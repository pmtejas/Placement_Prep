#include <bits/stdc++.h>
using namespace std;
//Implementation of Queue using array
class Queue {
    int size;
    int* arr;
    int front;
    int rear;
public:
    Queue() {
        size = 100;
        front = -1;
        rear = -1;
        arr = new int[size];
    }
    void enqueue(int x) {
        if (rear == size - 1) {
            cout << "Queue is full" << endl;
            return;
        }
        if (front == -1) front = 0;
        rear++;
        arr[rear] = x;
    }
    int dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int x = arr[front];
        front++;
        return x;
    }
    int peek() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }
    int sizee() {
        if (front == -1 || front > rear) return 0;
        return rear - front + 1;
    }
    int topp() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[rear];
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    cout << q.dequeue() << endl;
    cout << q.peek() << endl;
    cout << q.sizee() << endl;
    cout << q.topp() << endl; // Should return 20
    return 0;
}