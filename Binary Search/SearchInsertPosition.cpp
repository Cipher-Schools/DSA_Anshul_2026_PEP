// LeetCode: Search Insert Position
// https://leetcode.com/problems/search-insert-position/description/

#include <bits/stdc++.h>
using namespace std;

int searchInsert(const vector<int>& a, int target){
    int l=0,r=a.size();
    while(l<r){
        int m = l + (r-l)/2;
        if (a[m] < target) l = m+1; else r = m;
    }
    return l;
}

int main(){
    cout<<"Test1: "<<searchInsert({1,3,5,6}, 5)<<"\n"; // expected 2
    cout<<"Test2: "<<searchInsert({1,3,5,6}, 2)<<"\n"; // expected 1
    return 0;
}
