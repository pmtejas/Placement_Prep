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
Node* convertArrayToDll(vector<int>&nums){
    Node* head=new Node(nums[0]);
    Node* prev=head;
    for (int i = 1; i < nums.size(); i++)
    {
        Node* temp=new Node(nums[i],nullptr,nullptr);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
Node* insertAtTail(Node* head,int x){
    Node* newNode=new Node(x);
    if (head==nullptr)
    {
        return newNode;
    }
    Node* temp=head;
    while (temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
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
    vector<int>nums={1,2,3,4,5,6};
    Node* head=convertArrayToDll(nums);
    head=insertAtTail(head,7);
    printList(head);
    deleteList(head);
    
    return 0;
}