//linklist insertion example
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
void printLL(Node* head){
    Node* temp = head;
   int temp2 = 0;
    int sum=0;
    while(temp != NULL){
        cout << temp->data << " ";
        sum += temp->data;
        temp = temp->next;
        temp2++;
      
    }
    cout << endl;
   cout << "Length of linked list: " << temp2 << endl;
    cout << "Sum of linked list: " << sum << endl;
}
void insertionInLL(Node* &head,int pos, int val){
    Node* p = head;
    Node* q=nullptr;
    for(int i=0; i<pos; i++){
        q=p;
        p=p->next;
    }
    Node* newNode = new Node(val);
    newNode->next = p;
    q->next = newNode;
}
void insertionHead(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insertionTail(Node* head,int val){
    Node* p =head;
    while(p->next!=nullptr){
        p=p->next;
    }
    Node* newNode = new Node(val);
    p->next = newNode;
}
void deletionLL(Node* head, int pos){
    Node* p = head;
    Node* q = nullptr;
    for(int i=0; i<pos; i++){
        q=p;
        p=p->next;
    }
    q->next = p->next;
    delete p;
}
void deleteLLHead(Node* &head){
    Node* p = head;
    head = head->next;
    delete p;
}
    void deleteLLTail(Node* head){
    Node* p = head;
    Node* q = nullptr;
    while(p->next!=nullptr){
        q=p;
        p=p->next;
    }
    q->next = nullptr;
    delete p;

}
int main(){
    Node* head = new Node(10);
    head->next = new Node(15);
    head->next->next = new Node(20);
    printLL(head);
    insertionInLL(head,1,12);
    printLL(head);
    insertionHead(head,5);
    insertionTail(head,100);
    printLL(head);
    deletionLL(head,3);
    printLL(head);
    deleteLLHead(head);
    printLL(head);
    deleteLLTail(head);
    printLL(head);
    return 0;
}