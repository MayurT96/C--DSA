#include <iostream>
using namespace std;

// Step 1: Create a class
class Pattern {
public:
    // Step 2: Create a member function to print hollow square
    void printHollowSquare(int n) {
        // Outer loop for rows
        for (int i = 1; i <= n; ++i) {
            // Inner loop for columns
            for (int j = 1; j <= n; ++j) {
                // Print '*' at borders
                if (i == 1 || i == n || j == 1 || j == n) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl; // Move to next line
        }
    }
};

// Step 3: Main function
int main() {
    int n;
    cout << "Enter size of square: ";
    cin >> n;

    // Step 4: Create object of class
    Pattern p;

    // Step 5: Call the member function
    p.printHollowSquare(n);

    return 0;
}
