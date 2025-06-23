#include <iostream>
using namespace std;

// Class declaration
class SolidSquare {
private:
    int size;

public:
    // Constructor to initialize size
    SolidSquare(int n) {
        size = n;
    }

    // Function to print the square pattern
    void printPattern() {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

// Main function
int main() {
    int n;
    cout << "Enter size of square: ";
    cin >> n;

    // Create object and call method
    SolidSquare square(n);
    square.printPattern();

    return 0;
}
