#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* prev;
        Node* next;
        Node(int data1,Node* prev1,Node* next1){
            data=data1;
            next=next1;
            prev=prev1;
        }
        Node(int data1){
            data=data1;
            next=nullptr;
            prev=nullptr;
        }
        Node(){
            data=0;
            next=nullptr;
            prev=nullptr;
        }
};
Node* deleteHead(Node* head){
    if (head==nullptr)
    {
        return head;
    }
    Node* temp=head;
    head=head->next;
    head->prev=nullptr;
    delete temp;
    return head;
}
Node* deleteTail(Node* head){
    if (head==nullptr|| head->next==nullptr)
    {
        return nullptr;
    }
    Node* temp=head;
    while (temp->next!=nullptr)
    {
        temp=temp->next;
    }
    Node* newNode=temp->prev;
    newNode->next=nullptr;
    temp->prev=nullptr;
    delete temp;
    return head;
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
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node();
    head->next=second;
    second->prev=head;
    second->next=third;
    third->prev=second;
    third->next=nullptr;
    printList(head);
    head=deleteHead(head);
    printList(head);
    head=deleteTail(head);
    printList(head);
    deleteList(head);
    return 0;
}