#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // Teen node create kiye
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Data assign kiya
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // Linked list print karte hain
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    return 0;
}
