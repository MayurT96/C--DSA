#include <iostream>
using namespace std;

struct Node {
    int data;       // value store karta hai
    Node* next;     // next node ka pointer
};

// Head me insert
void insertAtHead(Node* &head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Tail me insert
void insertAtTail(Node* &head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Print karna
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " → ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Main function
int main() {
    Node* head = NULL;

    // Head me values insert
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    cout << "Linked List after head insertions: ";
    printList(head);  // 10 → 20 → 30 → NULL

    // Tail me values insert
    insertAtTail(head, 40);
    insertAtTail(head, 50);

    cout << "Linked List after tail insertions: ";
    printList(head);  // 10 → 20 → 30 → 40 → 50 → NULL

    return 0;
}
