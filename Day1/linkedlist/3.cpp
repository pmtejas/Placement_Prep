#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
    Node(){
        data=0;
        next=nullptr;
    }
};
Node* deleteNode(Node* head,int x){
    if(head==nullptr || x<=0){
        return head; // No deletion if list is empty or invalid position
    }
    if(x==1){ // Deleting the head node
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    Node* current=head;
    for(int i=1; i<x-1 && current!=nullptr; i++){
        current=current->next; // Traverse to the node before the one to be deleted
    }
    if(current==nullptr || current->next==nullptr){
        return head; // If x is greater than the number of nodes, no deletion occurs
    }
    Node* temp=current->next; // Node to be deleted
    current->next=temp->next; // Bypass the node to be deleted
    delete temp; // Free memory
    return head;
}
Node* deleteTail(Node* head){
    if (head==nullptr || head->next==nullptr)
    {
        return head;
    }
    Node* temp=head;
    while (temp!=nullptr)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return temp;
}

int main()
{
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    head->next=second;
    second->next=third;
    head=deleteNode(head,2);
    while (head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}