#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
        int data;
        Node* next;
        Node(int data1, Node* next1) {
            data = data1;
            next = next1;
        }
        Node(int data1) {
            data = data1;
            next = nullptr;
        }
        Node() {
            data = 0;
            next = nullptr;
        }
};
int checkIfTheElementIsPresent(Node* head,int x){
    Node* temp=head;
    while (temp!=nullptr)
    {
        if (temp->data==x)
        {
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}
int main()
{
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    head->next=second;
    second->next=third;
    third->next=nullptr;
    cout<<checkIfTheElementIsPresent(head,20);

    
    return 0;
}