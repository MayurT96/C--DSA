#include <iostream>
#include <vector>
using namespace std;

void shiftArrayByOne(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) return; // no need to shift for 0 or 1 element

    int last = arr[n - 1]; // store last element

    // shift all elements one position to the right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last; // place last element at the front
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    shiftArrayByOne(arr);

    // print the shifted array
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
