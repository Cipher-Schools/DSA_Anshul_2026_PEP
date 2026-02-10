// LeetCode: Find Peak Element
// https://leetcode.com/problems/find-peak-element/description/

#include <bits/stdc++.h>
using namespace std;

int findPeakElement(const vector<int>& nums){
    int l=0, r=(int)nums.size()-1;
    while (l<r){
        int m = l + (r-l)/2;
        if (nums[m] > nums[m+1]) r = m; else l = m+1;
    }
    return l;
}

int main(){
    cout<<"Test1 idx: "<<findPeakElement({1,2,3,1})<<" (expected 2)\n";
    cout<<"Test2 idx: "<<findPeakElement({1,2})<<" (expected 1)\n";
    return 0;
}
