#include <iostream>
using namespace std;

#define SIZE 100

class Queue {
private:
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Insert element into queue
    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow\n";
            return;
        }

        if (front == -1) front = 0; // first element inserted

        rear++;
        arr[rear] = value;
        cout << value << " enqueued into queue\n";
    }

    // Remove element from queue
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
            return;
        }

        cout << arr[front] << " dequeued from queue\n";
        front++;
    }

    // Display queue
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    q.display();

    return 0;
}
