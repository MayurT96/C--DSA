#include <iostream>
using namespace std;

struct Node {
    string data;     // Ab hum string use karenge (naam store karne ke liye)
    Node* next;
};

int main() {
    // 3 nodes create kiye
    Node* bunny = new Node();
    Node* mayur = new Node();
    Node* nintySix = new Node();

    // Data assign kiya
    bunny->data = "Bunny";
    bunny->next = mayur;

    mayur->data = "Mayur";
    mayur->next = nintySix;

    nintySix->data = "96";
    nintySix->next = NULL;

    // Print Linked List
    Node* temp = bunny;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    return 0;
}
