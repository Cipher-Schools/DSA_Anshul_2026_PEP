/*
PROBLEM: Max Consecutive Ones (LeetCode 485)

Given a binary array nums, return the maximum number of consecutive 1's in the array.

EXAMPLES:
1. Input: nums = [1,1,0,1,1,1]
   Output: 3
   Explanation: The first two digits or the last three digits are consecutive 1s. 
   The maximum number of consecutive 1s is 3.

2. Input: nums = [1,0,1,1,0,1]
   Output: 2
   Explanation: The maximum consecutive 1s is 2 (at index 2-3 or 5).

3. Input: nums = [1,1,1,1]
   Output: 4
   Explanation: All elements are 1, so maximum is 4.

4. Input: nums = [0]
   Output: 0
   Explanation: No 1 in the array.

CONSTRAINTS:
- 1 <= nums.length <= 10^5
- nums[i] is either 0 or 1.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

// Function to find maximum consecutive ones
int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxCount = 0;  // Maximum consecutive ones found so far
    int currentCount = 0;  // Current consecutive ones count
    
    for (int num : nums) {
        if (num == 1) {
            currentCount++;
            maxCount = max(maxCount, currentCount);
        } 
        else {
            currentCount = 0;  // Reset count when we encounter 0
        }
    }
    
    return maxCount;
}

// Utility function to print array
void printArray(vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    cout << "===== MAX CONSECUTIVE ONES =====" << endl << endl;
    
    // Test Case 1
    cout << "Test Case 1:" << endl;
    vector<int> nums1 = {1, 1, 0, 1, 1, 1};
    cout << "Array: ";
    printArray(nums1);
    cout << "Max Consecutive Ones: " << findMaxConsecutiveOnes(nums1) << endl;
    cout << "Expected: 3" << endl << endl;
    
    // Test Case 2
    cout << "Test Case 2:" << endl;
    vector<int> nums2 = {1, 0, 1, 1, 0, 1};
    cout << "Array: ";
    printArray(nums2);
    cout << "Max Consecutive Ones: " << findMaxConsecutiveOnes(nums2) << endl;
    cout << "Expected: 2" << endl << endl;
    
    // Test Case 3
    cout << "Test Case 3:" << endl;
    vector<int> nums3 = {1, 1, 1, 1};
    cout << "Array: ";
    printArray(nums3);
    cout << "Max Consecutive Ones: " << findMaxConsecutiveOnes(nums3) << endl;
    cout << "Expected: 4" << endl << endl;
    
    // Test Case 4
    cout << "Test Case 4:" << endl;
    vector<int> nums4 = {0};
    cout << "Array: ";
    printArray(nums4);
    cout << "Max Consecutive Ones: " << findMaxConsecutiveOnes(nums4) << endl;
    cout << "Expected: 0" << endl << endl;
    
    // Test Case 5
    cout << "Test Case 5:" << endl;
    vector<int> nums5 = {1};
    cout << "Array: ";
    printArray(nums5);
    cout << "Max Consecutive Ones: " << findMaxConsecutiveOnes(nums5) << endl;
    cout << "Expected: 1" << endl << endl;
    
    // Test Case 6
    cout << "Test Case 6:" << endl;
    vector<int> nums6 = {0, 0, 1, 1, 1, 0, 1, 1, 0, 1};
    cout << "Array: ";
    printArray(nums6);
    cout << "Max Consecutive Ones: " << findMaxConsecutiveOnes(nums6) << endl;
    cout << "Expected: 3" << endl << endl;
    
    // Test Case 7
    cout << "Test Case 7:" << endl;
    vector<int> nums7 = {1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1};
    cout << "Array: ";
    printArray(nums7);
    cout << "Max Consecutive Ones: " << findMaxConsecutiveOnes(nums7) << endl;
    cout << "Expected: 4" << endl << endl;
    
    return 0;
}
