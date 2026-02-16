// https://www.geeksforgeeks.org/problems/print-matrix-in-snake-pattern-1587115621/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> snakePattern(vector<vector<int>>& mat) {
        vector<int> result;
        int rows = mat.size();
        
        // Traverse row by row
        for(int i = 0; i < rows; i++) {
            // If row index is even, traverse left to right
            if(i % 2 == 0) {
                for(int j = 0; j < mat[i].size(); j++) {
                    result.push_back(mat[i][j]);
                }
            }
            // If row index is odd, traverse right to left
            else {
                for(int j = mat[i].size() - 1; j >= 0; j--) {
                    result.push_back(mat[i][j]);
                }
            }
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    vector<vector<int>> mat1 = {{45, 48, 54}, {21, 89, 87}, {70, 78, 15}};
    vector<int> result1 = sol.snakePattern(mat1);
    cout << "Test Case 1: ";
    for(int x : result1) {
        cout << x << " ";
    }
    cout << endl;
    // Expected Output: [45, 48, 54, 87, 89, 21, 70, 78, 15]
    
    // Test Case 2
    vector<vector<int>> mat2 = {{1, 2}, {3, 4}};
    vector<int> result2 = sol.snakePattern(mat2);
    cout << "Test Case 2: ";
    for(int x : result2) {
        cout << x << " ";
    }
    cout << endl;
    // Expected Output: [1, 2, 4, 3]
    
    return 0;
}
