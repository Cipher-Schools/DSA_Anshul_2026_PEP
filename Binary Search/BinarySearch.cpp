// LeetCode: Binary Search
// https://leetcode.com/problems/binary-search/description/

#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& a, int target){
    int l=0, r=(int)a.size()-1;
    while(l<=r){
        int mid = l + (r-l)/2;
        if (a[mid]==target) return mid;
        if (a[mid] < target) l = mid+1; else r = mid-1;
    }
    return -1;
}

int main(){
    cout<<"Test1: "<<binarySearch({-1,0,3,5,9,12}, 9)<<"\n"; // expected 4
    cout<<"Test2: "<<binarySearch({1,2,3,4,5}, 6)<<"\n"; // expected -1
    return 0;
}
