// https://www.geeksforgeeks.org/problems/boundary-traversal-of-matrix-1587115620/0

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        vector<int> result;
        int rows = mat.size();
        
        if(rows == 0) return result;
        
        int cols = mat[0].size();
        
        // Handle single row
        if(rows == 1) {
            for(int j = 0; j < cols; j++) {
                result.push_back(mat[0][j]);
            }
            return result;
        }
        
        // Handle single column
        if(cols == 1) {
            for(int i = 0; i < rows; i++) {
                result.push_back(mat[i][0]);
            }
            return result;
        }
        
        int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
        
        // Top row - left to right
        for(int j = left; j <= right; j++) {
            result.push_back(mat[top][j]);
        }
        top++;
        
        // Right column - top to bottom
        for(int i = top; i <= bottom; i++) {
            result.push_back(mat[i][right]);
        }
        right--;
        
        // Bottom row - right to left
        if(top <= bottom) {
            for(int j = right; j >= left; j--) {
                result.push_back(mat[bottom][j]);
            }
            bottom--;
        }
        
        // Left column - bottom to top
        if(left <= right) {
            for(int i = bottom; i >= top; i--) {
                result.push_back(mat[i][left]);
            }
            left++;
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    vector<vector<int>> mat1 = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    vector<int> result1 = sol.boundaryTraversal(mat1);
    cout << "Test Case 1: ";
    for(int x : result1) {
        cout << x << " ";
    }
    cout << endl;
    // Expected Output: [1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5]
    
    // Test Case 2
    vector<vector<int>> mat2 = {{12, 11, 10, 9}, {8, 7, 6, 5}, {4, 3, 2, 1}};
    vector<int> result2 = sol.boundaryTraversal(mat2);
    cout << "Test Case 2: ";
    for(int x : result2) {
        cout << x << " ";
    }
    cout << endl;
    // Expected Output: [12, 11, 10, 9, 5, 1, 2, 3, 4, 8]
    
    // Test Case 3
    vector<vector<int>> mat3 = {{12, 11}, {4, 3}};
    vector<int> result3 = sol.boundaryTraversal(mat3);
    cout << "Test Case 3: ";
    for(int x : result3) {
        cout << x << " ";
    }
    cout << endl;
    // Expected Output: [12, 11, 3, 4]
    
    return 0;
}
