//doubly linklist 
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
void insertatpos(Node* &head,int pos,int val){
   Node*p=head;
   Node*q=nullptr;
   for(int i=0;i<pos;i++){
       q=p;
       p=p->next;
   }
    Node* newnode=new Node(val);
    newnode->next=p;
    newnode->prev=q;
    q->next=newnode;
    p->prev=newnode;
};
void insertathead(Node* &head,int val){
    Node* newnode=new Node(val);
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
};
void insertattail(Node* &head,int val){
    Node*newnode=new Node(val);
    Node* p=head;

    while(p->next!=nullptr){
        p=p->next;
    }
    p->next=newnode;
    newnode->prev=p;
   
}
void deleteatpos(Node* &head,int pos){
    Node* p=head;
    Node* q=nullptr;
    for(int i=0;i<pos;i++){
        q=p;
        p=p->next;
    }
    q->next=p->next;
   
        p->next->prev=q;
    
    delete p;
};
void deleteathead(Node* &head){
    Node* p=head;
    head=head->next;
    head->prev=nullptr;
    delete p;
    };
    void deleteattail(Node* &head){
    Node* p=head;
    Node* q=nullptr;
    while(p->next!=nullptr){    
        q=p;
        p=p->next;
    }
    q->next=nullptr;
    delete p;
    };
void printLL(Node* head){
    Node* p=head;
    while(p!=nullptr){
        cout<<p->data<<" ";
        p=p->next;
    }
};

int main(){

    Node* head=new Node(12);
    head->next=new Node(22);
    head->next->prev=head;


    head->next->next=new Node(32);
    head->next->next->prev=head->next;
    int pos=2;
    int val=42;
    insertathead(head,val);
    insertatpos(head,pos,val);
    insertattail(head,val);
    deleteatpos(head,pos);
    deleteathead(head);
    deleteattail(head);
    printLL(head);
};