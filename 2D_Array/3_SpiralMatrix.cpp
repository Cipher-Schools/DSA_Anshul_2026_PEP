// https://leetcode.com/problems/spiral-matrix/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        
        if(matrix.empty()) return result;
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
        
        while(top <= bottom && left <= right) {
            // Traverse right along the top row
            for(int col = left; col <= right; col++) {
                result.push_back(matrix[top][col]);
            }
            top++;
            
            // Traverse down along the right column
            for(int row = top; row <= bottom; row++) {
                result.push_back(matrix[row][right]);
            }
            right--;
            
            // Traverse left along the bottom row (if exists)
            if(top <= bottom) {
                for(int col = right; col >= left; col--) {
                    result.push_back(matrix[bottom][col]);
                }
                bottom--;
            }
            
            // Traverse up along the left column (if exists)
            if(left <= right) {
                for(int row = bottom; row >= top; row--) {
                    result.push_back(matrix[row][left]);
                }
                left++;
            }
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1: 3x3 matrix
    vector<vector<int>> matrix1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> result1 = sol.spiralOrder(matrix1);
    cout << "Test Case 1: ";
    for(int x : result1) {
        cout << x << " ";
    }
    cout << endl;
    // Expected Output: [1, 2, 3, 6, 9, 8, 7, 4, 5]
    
    // Test Case 2: 3x4 matrix
    vector<vector<int>> matrix2 = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    vector<int> result2 = sol.spiralOrder(matrix2);
    cout << "Test Case 2: ";
    for(int x : result2) {
        cout << x << " ";
    }
    cout << endl;
    // Expected Output: [1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7]
    
    // Test Case 3: 1x4 matrix
    vector<vector<int>> matrix3 = {{1, 2, 3, 4}};
    vector<int> result3 = sol.spiralOrder(matrix3);
    cout << "Test Case 3: ";
    for(int x : result3) {
        cout << x << " ";
    }
    cout << endl;
    // Expected Output: [1, 2, 3, 4]
    
    // Test Case 4: 4x1 matrix
    vector<vector<int>> matrix4 = {{1}, {2}, {3}, {4}};
    vector<int> result4 = sol.spiralOrder(matrix4);
    cout << "Test Case 4: ";
    for(int x : result4) {
        cout << x << " ";
    }
    cout << endl;
    // Expected Output: [1, 2, 3, 4]
    
    return 0;
}
