// Circular Linked List 
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Print circular linked list
void printCircularLL(Node* head) {
    if (head == nullptr) return;
    Node* temp = head;
    int length = 0, sum = 0;
    do {
        cout << temp->data << " ";
        sum += temp->data;
        length++;
        temp = temp->next;
    } while (temp != head);
    cout << endl;
    cout << "Length of circular linked list: " << length << endl;
    cout << "Sum of elements: " << sum << endl;
}

// Insert at head in circular linked list
void insertHead(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        newNode->next = newNode;
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}

// Insert at tail in circular linked list
void insertTail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        newNode->next = newNode;
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
}

// Insert at position (0-indexed)
void insertAtPos(Node*& head, int pos, int val) {
    if (pos == 0) {
        insertHead(head, val);
        return;
    }
    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp->next != head; i++)
        temp = temp->next;
    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete node at position
void deleteAtPos(Node*& head, int pos) {
    if (head == nullptr) return;

    if (pos == 0) {
        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;
        Node* del = head;
        if (head->next == head) {
            head = nullptr;
        } else {
            temp->next = head->next;
            head = head->next;
        }
        delete del;
        return;
    }

    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp->next != head; i++)
        temp = temp->next;

    Node* del = temp->next; 
    if (del == head) return;
    temp->next = del->next;
    delete del;
}

int main() {
    Node* head = nullptr;

    insertTail(head, 10);
    insertTail(head, 15);
    insertTail(head, 20);
    printCircularLL(head);

    insertAtPos(head, 1, 12);
    printCircularLL(head);

    insertHead(head, 5);
    insertTail(head, 100);
    printCircularLL(head);

    deleteAtPos(head, 3);
    printCircularLL(head);

    return 0;
}
