#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max = arr[0];  // Assume first element is max

    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main() {
    int arr[] = {3, 8, 12, 5, 14, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxValue = findMax(arr, size);

    cout << "Maximum element is: " << maxValue << endl;

    return 0;
}
