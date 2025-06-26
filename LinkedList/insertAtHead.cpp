#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* next;  // Corrected: 'Node' capital N
};

void insertAtHead(Node* &head, char value) {
    Node* newNode = new Node();  // Corrected: 'new Node()'
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;  // Corrected: 'Node' not 'Nede'

    insertAtHead(head, 'C');
    insertAtHead(head, 'B');
    insertAtHead(head, 'A');

    cout << "Before Insertion At Head: ";
    printList(head);

    insertAtHead(head, 'X');

    cout << "After insertion at head: ";
    printList(head);

    return 0;
}
