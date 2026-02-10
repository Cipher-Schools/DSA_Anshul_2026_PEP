// LeetCode: Find Minimum in Rotated Sorted Array
// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;

int findMinRotated(const vector<int>& nums){
    int l=0, r=(int)nums.size()-1;
    while (l<r){
        int m = l + (r-l)/2;
        if (nums[m] > nums[r]) l = m+1;
        else r = m;
    }
    return nums[l];
}

int main(){
    cout<<"Test1: "<<findMinRotated({3,4,5,1,2})<<"\n"; // expected 1
    cout<<"Test2: "<<findMinRotated({4,5,6,7,0,1,2})<<"\n"; // expected 0
    return 0;
}
