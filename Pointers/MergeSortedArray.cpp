// LeetCode: Merge Sorted Array
// https://leetcode.com/problems/merge-sorted-array/description/

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, const vector<int>& nums2, int n) {
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) nums1[k--] = nums1[i--];
        else nums1[k--] = nums2[j--];
    }
    while (j >= 0) nums1[k--] = nums2[j--];
}

void printVec(const vector<int>& v){ for(int x:v) cout<<x<<" "; cout<<"\n"; }

int main(){
    vector<int> a1 = {1,2,3,0,0,0}; merge(a1,3, {2,5,6},3); cout<<"Test1: "; printVec(a1); // 1 2 2 3 5 6
    vector<int> a2 = {0}; merge(a2,0, {1},1); cout<<"Test2: "; printVec(a2); // 1
    vector<int> a3 = {4,5,6,0,0,0}; merge(a3,3, {1,2,3},3); cout<<"Test3: "; printVec(a3); // 1 2 3 4 5 6
    return 0;
}
