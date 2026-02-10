// LeetCode: Find First and Last Position of Element in Sorted Array
// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;

pair<int,int> searchRange(const vector<int>& a, int target){
    auto lb = lower_bound(a.begin(), a.end(), target);
    if (lb==a.end() || *lb != target) return {-1,-1};
    auto ub = upper_bound(a.begin(), a.end(), target);
    int first = lb - a.begin();
    int last = ub - a.begin() - 1;
    return {first, last};
}

int main(){
    auto p1 = searchRange({5,7,7,8,8,10}, 8); cout<<"Test1: "<<p1.first<<","<<p1.second<<"\n"; // expected 3,4
    auto p2 = searchRange({5,7,7,8,8,10}, 6); cout<<"Test2: "<<p2.first<<","<<p2.second<<"\n"; // expected -1,-1
    return 0;
}
