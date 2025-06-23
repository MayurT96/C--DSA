#include <iostream>
using namespace std;

// Pattern class banaya
class Pattern {
public:
    // Member function to print solid square pattern
    void printSolidSquare(int n) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    Pattern p;  // object banaya
    p.printSolidSquare(n);  // method call kiya

    return 0;
}
