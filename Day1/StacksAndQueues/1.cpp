#include <bits/stdc++.h>
using namespace std;
//Implentation of Stack using array
class Stack{
    int size;
    int top;
    int* arr;
    public:
        Stack(){
            size=100;
            top=-1;
            arr=new int[size];
        }
        void push(int x){
            top++;
            arr[top]=x;
        }
        int pop(){
            int x=arr[top];
            top--;
            return x;
        }
        int topp(){
            return arr[top];
        }
        int sizee(){
            return top+1;
        }
        int peek(){
            if(top==-1) return -1; // Stack is empty
            return arr[top];
        }
};
int main() {
    Stack s;
    s.push(20);
    s.push(10);
    cout<<s.pop()<<endl;
    cout<<s.topp()<<endl;
    cout<<s.sizee()<<endl;
    cout<<s.peek()<<endl; // Should return 20
    return 0;
}