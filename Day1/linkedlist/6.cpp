// doubly linklist introduction
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data1,Node* prev1,Node* next1 ){
        data=data1;
        prev=prev1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        prev=nullptr;
        next=nullptr;
    }
    Node(){
        data=0;
        prev=nullptr;
        next=nullptr;
    }
};
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
void deleteList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}
int main()
{
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third =new Node();
    head->next=second;
    second->prev=head;
    second->next=third;
    third->prev=second;
    third->next=nullptr;
    printList(head);
    deleteList(head);
    return 0;
}