#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> printExtremeElementsAlternately(vector<int>& arr) {
        vector<int> ans;
        sort(arr.begin(), arr.end());  // Step 1: Sort the array
        int left = 0, right = arr.size() - 1;

        // Step 2: Pick alternately from left and right
        while (left <= right) {
            if (left <= right) {
                ans.push_back(arr[left]);
                left++;
            }
            if (left <= right) {
                ans.push_back(arr[right]);
                right--;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {5, 2, 9, 1, 7};

    vector<int> result = sol.printExtremeElementsAlternately(arr);

    cout << "Alternating Extreme Elements: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
