#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to print linked list
void printList(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {
    // Creating 3 nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Assigning data
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = nullptr;

    // Print the linked list
    printList(head);

    return 0;
}
