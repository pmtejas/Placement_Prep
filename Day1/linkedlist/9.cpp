#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* back;
        Node(int data1,Node* prev1,Node* next1){
            data=data1;
            back=prev1;
            next=next1;
        }
        Node(int data1){
            data=data1;
            next=nullptr;
            back=nullptr;
        }
        Node(){
            data=0;
            back=nullptr;
            next=nullptr;
        }
};
Node* reverseDll(Node* head){
    if (head==nullptr || head->next==nullptr)
    {
        return head;
    }
    Node* prev=nullptr;
    Node* curr=head;
    while (curr!=nullptr)
    {
        prev=curr->back;
        curr->back=curr->next;
        curr->next=prev;
        curr=curr->back;
    }
    return prev->back;
}
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
    // Node(int data1,Node* prev1,Node* next1) use this constructor to create a node
    Node* head = new Node(1);
    head->next = new Node(2, head, nullptr);
    head->next->next = new Node(3, head->next, nullptr);
    printList(head);
    head=reverseDll(head);
    printList(head);
    deleteList(head);
    return 0;
}