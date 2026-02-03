/*
PROBLEM: Reverse an Array

You are given an array of integers arr[]. You have to reverse the given array.
Modify the array in place.

EXAMPLES:
1. Input: arr = [1, 4, 3, 2, 6, 5]
   Output: [5, 6, 2, 3, 4, 1]
   Explanation: The elements of the array are [1, 4, 3, 2, 6, 5]. After reversing 
   the array, the first element goes to the last position, the second element goes 
   to the second last position and so on.

2. Input: arr = [4, 5, 2]
   Output: [2, 5, 4]

3. Input: arr = [1]
   Output: [1]
   Explanation: Single element array remains the same.

CONSTRAINTS:
- 1 ≤ arr.size() ≤ 10^5
- 0 ≤ arr[i] ≤ 10^5

Time Complexity: O(n)
Space Complexity: O(1) - in-place reversal
*/

#include<bits/stdc++.h>
using namespace std;

// Function to reverse array in place
void reverseArray(vector<int>& arr) {
    int n = arr.size();
    int left = 0;
    int right = n - 1;
    
    while (left < right) {
        // Swap elements at left and right positions
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        
        left++;
        right--;
    }
}

// Utility function to print array
void printArray(vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    cout << "===== REVERSE ARRAY PROBLEM =====" << endl << endl;
    
    // Test Case 1
    cout << "Test Case 1:" << endl;
    vector<int> arr1 = {1, 4, 3, 2, 6, 5};
    cout << "Original Array: ";
    printArray(arr1);
    reverseArray(arr1);
    cout << "Reversed Array: ";
    printArray(arr1);
    cout << "Expected: 5 6 2 3 4 1" << endl << endl;
    
    // Test Case 2
    cout << "Test Case 2:" << endl;
    vector<int> arr2 = {4, 5, 2};
    cout << "Original Array: ";
    printArray(arr2);
    reverseArray(arr2);
    cout << "Reversed Array: ";
    printArray(arr2);
    cout << "Expected: 2 5 4" << endl << endl;
    
    // Test Case 3
    cout << "Test Case 3:" << endl;
    vector<int> arr3 = {1};
    cout << "Original Array: ";
    printArray(arr3);
    reverseArray(arr3);
    cout << "Reversed Array: ";
    printArray(arr3);
    cout << "Expected: 1" << endl << endl;
    
    // Test Case 4
    cout << "Test Case 4:" << endl;
    vector<int> arr4 = {10, 20, 30, 40, 50};
    cout << "Original Array: ";
    printArray(arr4);
    reverseArray(arr4);
    cout << "Reversed Array: ";
    printArray(arr4);
    cout << "Expected: 50 40 30 20 10" << endl << endl;
    
    // Test Case 5
    cout << "Test Case 5:" << endl;
    vector<int> arr5 = {100, 200};
    cout << "Original Array: ";
    printArray(arr5);
    reverseArray(arr5);
    cout << "Reversed Array: ";
    printArray(arr5);
    cout << "Expected: 200 100" << endl << endl;
    
    return 0;
}
