/*
PROBLEM: Largest Element in Array

Given an array arr[]. The task is to find the largest element and return it.

EXAMPLES:
1. Input: arr[] = [1, 8, 7, 56, 90]
   Output: 90
   Explanation: The largest element of the given array is 90.

2. Input: arr[] = [5, 5, 5, 5]
   Output: 5
   Explanation: The largest element of the given array is 5 (all elements are same).

3. Input: arr[] = [10]
   Output: 10
   Explanation: There is only one element which is the largest.

CONSTRAINTS:
- 1 <= arr.size() <= 10^6
- 0 <= arr[i] <= 10^6

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

// Function to find largest element in array
int findLargest(vector<int>& arr) {
    int maxElement = arr[0];
    
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    
    return maxElement;
}

// Utility function to print array
void printArray(vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    cout << "===== LARGEST ELEMENT IN ARRAY =====" << endl << endl;
    
    // Test Case 1
    cout << "Test Case 1:" << endl;
    vector<int> arr1 = {1, 8, 7, 56, 90};
    cout << "Array: ";
    printArray(arr1);
    cout << "Largest Element: " << findLargest(arr1) << endl;
    cout << "Expected: 90" << endl << endl;
    
    // Test Case 2
    cout << "Test Case 2:" << endl;
    vector<int> arr2 = {5, 5, 5, 5};
    cout << "Array: ";
    printArray(arr2);
    cout << "Largest Element: " << findLargest(arr2) << endl;
    cout << "Expected: 5" << endl << endl;
    
    // Test Case 3
    cout << "Test Case 3:" << endl;
    vector<int> arr3 = {10};
    cout << "Array: ";
    printArray(arr3);
    cout << "Largest Element: " << findLargest(arr3) << endl;
    cout << "Expected: 10" << endl << endl;
    
    // Test Case 4
    cout << "Test Case 4:" << endl;
    vector<int> arr4 = {50, 30, 100, 25, 80};
    cout << "Array: ";
    printArray(arr4);
    cout << "Largest Element: " << findLargest(arr4) << endl;
    cout << "Expected: 100" << endl << endl;
    
    // Test Case 5
    cout << "Test Case 5:" << endl;
    vector<int> arr5 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Array: ";
    printArray(arr5);
    cout << "Largest Element: " << findLargest(arr5) << endl;
    cout << "Expected: 9" << endl << endl;
    
    // Test Case 6
    cout << "Test Case 6:" << endl;
    vector<int> arr6 = {0, 0, 0, 100};
    cout << "Array: ";
    printArray(arr6);
    cout << "Largest Element: " << findLargest(arr6) << endl;
    cout << "Expected: 100" << endl << endl;
    
    return 0;
}
