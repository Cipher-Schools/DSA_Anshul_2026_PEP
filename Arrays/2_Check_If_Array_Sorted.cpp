/*
PROBLEM: Check if Array is Sorted

Given an array arr[], check whether it is sorted in non-decreasing order. 
Return true if it is sorted otherwise false.

EXAMPLES:
1. Input: arr[] = [10, 20, 30, 40, 50]
   Output: true
   Explanation: The given array is sorted in non-decreasing order.

2. Input: arr[] = [90, 80, 100, 70, 40, 30]
   Output: false
   Explanation: The given array is not sorted.

3. Input: arr[] = [1, 1, 1, 1]
   Output: true
   Explanation: Duplicate elements in non-decreasing order.

CONSTRAINTS:
- 1 ≤ arr.size() ≤ 10^6
- -10^9 ≤ arr[i] ≤ 10^9

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

// Function to check if array is sorted
bool isSorted(vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 0; i < n - 1; i++) {
        // If any element is greater than the next element, array is not sorted
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    
    return true;
}

// Utility function to print array
void printArray(vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    cout << "===== CHECK IF ARRAY IS SORTED =====" << endl << endl;
    
    // Test Case 1
    cout << "Test Case 1:" << endl;
    vector<int> arr1 = {10, 20, 30, 40, 50};
    cout << "Array: ";
    printArray(arr1);
    cout << "Is Sorted: " << (isSorted(arr1) ? "true" : "false") << endl;
    cout << "Expected: true" << endl << endl;
    
    // Test Case 2
    cout << "Test Case 2:" << endl;
    vector<int> arr2 = {90, 80, 100, 70, 40, 30};
    cout << "Array: ";
    printArray(arr2);
    cout << "Is Sorted: " << (isSorted(arr2) ? "true" : "false") << endl;
    cout << "Expected: false" << endl << endl;
    
    // Test Case 3
    cout << "Test Case 3:" << endl;
    vector<int> arr3 = {1, 1, 1, 1};
    cout << "Array: ";
    printArray(arr3);
    cout << "Is Sorted: " << (isSorted(arr3) ? "true" : "false") << endl;
    cout << "Expected: true" << endl << endl;
    
    // Test Case 4
    cout << "Test Case 4:" << endl;
    vector<int> arr4 = {5};
    cout << "Array: ";
    printArray(arr4);
    cout << "Is Sorted: " << (isSorted(arr4) ? "true" : "false") << endl;
    cout << "Expected: true" << endl << endl;
    
    // Test Case 5
    cout << "Test Case 5:" << endl;
    vector<int> arr5 = {1, 3, 2, 4};
    cout << "Array: ";
    printArray(arr5);
    cout << "Is Sorted: " << (isSorted(arr5) ? "true" : "false") << endl;
    cout << "Expected: false" << endl << endl;
    
    // Test Case 6
    cout << "Test Case 6:" << endl;
    vector<int> arr6 = {-5, -2, 0, 3, 10};
    cout << "Array: ";
    printArray(arr6);
    cout << "Is Sorted: " << (isSorted(arr6) ? "true" : "false") << endl;
    cout << "Expected: true" << endl << endl;
    
    return 0;
}
