// LeetCode: Search in Rotated Sorted Array II (with duplicates)
// https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/

#include <bits/stdc++.h>
using namespace std;

bool searchRotatedII(const vector<int>& nums, int target) {
    int l = 0, r = (int)nums.size() - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (nums[m] == target) return true;
        if (nums[l] == nums[m] && nums[m] == nums[r]) {
            ++l; --r;
        } else if (nums[l] <= nums[m]) {
            if (nums[l] <= target && target < nums[m]) r = m - 1;
            else l = m + 1;
        } else {
            if (nums[m] < target && target <= nums[r]) l = m + 1;
            else r = m - 1;
        }
    }
    return false;
}

int main(){
    cout<<boolalpha;
    cout<<"Test1: "<<searchRotatedII({2,5,6,0,0,1,2}, 0)<<"\n"; // expected true
    cout<<"Test2: "<<searchRotatedII({2,5,6,0,0,1,2}, 3)<<"\n"; // expected false
    return 0;
}
