#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int data1,Node* next1){
            data=data1;
            next1=next;
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
int lengthOfLinkedlist(Node* head){
    int count=0;
    Node* temp=head;
    while(temp!=nullptr){
        count++;
        temp=temp->next;
    }
    return count;
}
int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    head->next=second;
    second->next=third;
    third->next=nullptr;

    cout << "Length of linked list: " << lengthOfLinkedlist(head) << endl;

    // Clean up memory
    delete head;
    delete second;
    delete third;
    head = nullptr;
    

    return 0;
}