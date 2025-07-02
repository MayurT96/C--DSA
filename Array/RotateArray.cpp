#include <iostream>
#include <vector>
#include <algorithm> // for reverse()
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();

    // Step 1: Handle case where k > n
    k = k % n;

    // Step 2: Reverse the entire array
    reverse(nums.begin(), nums.end());

    // Step 3: Reverse first k elements
    reverse(nums.begin(), nums.begin() + k);

    // Step 4: Reverse remaining n-k elements
    reverse(nums.begin() + k, nums.end());
}


void printArray(const vector<int>& nums) {
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}
int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original array: ";
    printArray(nums);

    rotate(nums, k);

    cout << "Rotated array: ";
    printArray(nums);

    return 0;
}
