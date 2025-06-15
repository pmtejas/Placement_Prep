#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node (int data1,Node* next1){
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
int main()
{
      Node* head=new Node(10);
      Node* second=new Node(20);
      Node* third=new Node();
      head->next=second;
      second->next=third;
      while (head!=nullptr)
      {
        cout<<head->data<<" ";
        head=head->next;
      }
      
    return 0;
}