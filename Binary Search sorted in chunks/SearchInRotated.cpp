// LeetCode: Search in Rotated Sorted Array
// https://leetcode.com/problems/search-in-rotated-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;

int searchRotated(const vector<int>& nums, int target) {
    int l = 0, r = (int)nums.size() - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (nums[m] == target) return m;
        if (nums[l] <= nums[m]) {
            if (nums[l] <= target && target < nums[m]) r = m - 1;
            else l = m + 1;
        } else {
            if (nums[m] < target && target <= nums[r]) l = m + 1;
            else r = m - 1;
        }
    }
    return -1;
}

int main(){
    cout<<"Test1: "<<searchRotated({4,5,6,7,0,1,2}, 0)<<"\n"; // expected 4
    cout<<"Test2: "<<searchRotated({4,5,6,7,0,1,2}, 3)<<"\n"; // expected -1
    return 0;
}
