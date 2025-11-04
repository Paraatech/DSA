//find mid in doubly linked list
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=nullptr;
        prev=nullptr;
    }
};
int count(Node* head){
    Node* p=head;
    int count=0;
    while(p!=nullptr){
        count++;
        p=p->next;
    }
    return count;
}
void checkloop(Node*head){
    Node*p=head;
    Node*q=head;
    while(q!=nullptr && q->next!=nullptr){
        q=q->next;
        p=p->next->next;
        if(p==q){
            cout<<"Loop detected"<<endl;
            return;
        }
        else{
            cout<<"No loop"<<endl;
            return;
        }
    }
};
int main(){
    Node* head=new Node(12);
    head->next=new Node(22);
    head->next->prev=head;
    head->next->next=new Node(32);
    head->next->next->next=new Node(42);
    head->next->next->prev=head->next;
    head->next->next->next->next=new Node(52);
    head->next->next->next->next->next=new Node(52);
    int n=count(head);
    int midpos=n/2;
    Node* p=head;
for (int i=0;i<midpos;i++){
    p=p->next;
}

    cout<<"Mid element is: "<<p->data<<endl;
    checkloop(head);

};