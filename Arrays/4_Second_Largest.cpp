/*
PROBLEM: Second Largest Element

Given an array of positive integers arr[], return the second largest element from 
the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.

EXAMPLES:
1. Input: arr[] = [12, 35, 1, 10, 34, 1]
   Output: 34
   Explanation: The largest element of the array is 35 and the second largest element is 34.

2. Input: arr[] = [10, 5, 10]
   Output: 5
   Explanation: The largest element of the array is 10 and the second largest element is 5.

3. Input: arr[] = [10, 10, 10]
   Output: -1
   Explanation: The largest element of the array is 10 and the second largest element does not exist.

CONSTRAINTS:
- 2 ≤ arr.size() ≤ 10^5
- 1 ≤ arr[i] ≤ 10^5

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

// Function to find second largest element
int findSecondLargest(vector<int>& arr) {
    int largest = -1;
    int secondLargest = -1;
    
    for (int num : arr) {
        if (num > largest) {
            // If current number is greater than largest,
            // update secondLargest and largest
            secondLargest = largest;
            largest = num;
        } 
        else if (num > secondLargest && num != largest) {
            // If current number is greater than secondLargest
            // but not equal to largest
            secondLargest = num;
        }
    }
    
    return secondLargest;
}

// Utility function to print array
void printArray(vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    cout << "===== SECOND LARGEST ELEMENT =====" << endl << endl;
    
    // Test Case 1
    cout << "Test Case 1:" << endl;
    vector<int> arr1 = {12, 35, 1, 10, 34, 1};
    cout << "Array: ";
    printArray(arr1);
    cout << "Second Largest Element: " << findSecondLargest(arr1) << endl;
    cout << "Expected: 34" << endl << endl;
    
    // Test Case 2
    cout << "Test Case 2:" << endl;
    vector<int> arr2 = {10, 5, 10};
    cout << "Array: ";
    printArray(arr2);
    cout << "Second Largest Element: " << findSecondLargest(arr2) << endl;
    cout << "Expected: 5" << endl << endl;
    
    // Test Case 3
    cout << "Test Case 3:" << endl;
    vector<int> arr3 = {10, 10, 10};
    cout << "Array: ";
    printArray(arr3);
    cout << "Second Largest Element: " << findSecondLargest(arr3) << endl;
    cout << "Expected: -1" << endl << endl;
    
    // Test Case 4
    cout << "Test Case 4:" << endl;
    vector<int> arr4 = {100, 50, 75, 25};
    cout << "Array: ";
    printArray(arr4);
    cout << "Second Largest Element: " << findSecondLargest(arr4) << endl;
    cout << "Expected: 75" << endl << endl;
    
    // Test Case 5
    cout << "Test Case 5:" << endl;
    vector<int> arr5 = {1, 1, 2, 2};
    cout << "Array: ";
    printArray(arr5);
    cout << "Second Largest Element: " << findSecondLargest(arr5) << endl;
    cout << "Expected: 1" << endl << endl;
    
    // Test Case 6
    cout << "Test Case 6:" << endl;
    vector<int> arr6 = {5, 4};
    cout << "Array: ";
    printArray(arr6);
    cout << "Second Largest Element: " << findSecondLargest(arr6) << endl;
    cout << "Expected: 4" << endl << endl;
    
    return 0;
}
