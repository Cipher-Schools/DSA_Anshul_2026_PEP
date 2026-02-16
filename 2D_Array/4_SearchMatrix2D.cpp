// https://leetcode.com/problems/search-a-2d-matrix-ii/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Approach 1: Start from top-right corner
    // Time Complexity: O(m + n)
    // Space Complexity: O(1)
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()) {
            return false;
        }
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // Start from top-right corner
        int row = 0;
        int col = cols - 1;
        
        while(row < rows && col >= 0) {
            if(matrix[row][col] == target) {
                return true;
            }
            // If current element is greater than target, move left
            else if(matrix[row][col] > target) {
                col--;
            }
            // If current element is less than target, move down
            else {
                row++;
            }
        }
        
        return false;
    }
    
    // Approach 2: Start from bottom-left corner (Alternative approach)
    // Time Complexity: O(m + n)
    // Space Complexity: O(1)
    bool searchMatrixAlt(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()) {
            return false;
        }
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // Start from bottom-left corner
        int row = rows - 1;
        int col = 0;
        
        while(row >= 0 && col < cols) {
            if(matrix[row][col] == target) {
                return true;
            }
            // If current element is greater than target, move up
            else if(matrix[row][col] > target) {
                row--;
            }
            // If current element is less than target, move right
            else {
                col++;
            }
        }
        
        return false;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1: Element exists
    vector<vector<int>> matrix1 = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    int target1 = 5;
    cout << "Test Case 1 (Target = 5): " << (sol.searchMatrix(matrix1, target1) ? "true" : "false") << endl;
    // Expected Output: true
    
    // Test Case 2: Element doesn't exist
    vector<vector<int>> matrix2 = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    int target2 = 20;
    cout << "Test Case 2 (Target = 20): " << (sol.searchMatrix(matrix2, target2) ? "true" : "false") << endl;
    // Expected Output: false
    
    // Test Case 3: Target at first element
    vector<vector<int>> matrix3 = {{1, 2}, {3, 4}};
    int target3 = 1;
    cout << "Test Case 3 (Target = 1): " << (sol.searchMatrix(matrix3, target3) ? "true" : "false") << endl;
    // Expected Output: true
    
    // Test Case 4: Target at last element
    vector<vector<int>> matrix4 = {{1, 2}, {3, 4}};
    int target4 = 4;
    cout << "Test Case 4 (Target = 4): " << (sol.searchMatrix(matrix4, target4) ? "true" : "false") << endl;
    // Expected Output: true
    
    // Test Case 5: Single element matrix
    vector<vector<int>> matrix5 = {{5}};
    int target5 = 5;
    cout << "Test Case 5 (Target = 5): " << (sol.searchMatrix(matrix5, target5) ? "true" : "false") << endl;
    // Expected Output: true
    
    // Test Case 6: Alternative approach test
    cout << "\nUsing Alternative Approach (Bottom-Left):" << endl;
    cout << "Test Case 1 (Target = 5): " << (sol.searchMatrixAlt(matrix1, target1) ? "true" : "false") << endl;
    cout << "Test Case 2 (Target = 20): " << (sol.searchMatrixAlt(matrix2, target2) ? "true" : "false") << endl;
    
    return 0;
}
