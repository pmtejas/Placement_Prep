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
Node* insertAtBegining(Node* head,int x){
    if(head==nullptr){
        return new Node(x);
    }
    Node* temp=new Node(x);
    temp->next=head;
    return temp;
}
Node* insertAtTheEnd(Node* head,int x){
    if(head==nullptr){
        return new Node(x);
    }
    while(head!=nullptr && head->next!=nullptr){
        head=head->next;
    }
    head->next=new Node(x);
    return head;
}
int main()
{
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node();
    head->next=second;
    second->next=third;
    head=insertAtBegining(head,3);
    Node* last=insertAtTheEnd(head,6);
    cout<<"Linked List ";
    while (head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}