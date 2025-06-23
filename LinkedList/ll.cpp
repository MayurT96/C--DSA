#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtHead(Node*& head, int val) {
    Node* newNode = new Node();     
    newNode->data = val;           
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
    Node* head = NULL;   // Empty list

    insertAtHead(head, 10);   
    insertAtHead(head, 20);   
    insertAtHead(head, 30);   

    printList(head);   

    return 0;
}
