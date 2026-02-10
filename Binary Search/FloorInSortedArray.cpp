// GeeksforGeeks: Floor in a sorted array
// https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1

#include <bits/stdc++.h>
using namespace std;

// returns index of floor (largest element <= x), or -1 if none
int floorIndex(const vector<int>& a, int x){
    int l=0, r=a.size()-1, ans=-1;
    while(l<=r){
        int m = l + (r-l)/2;
        if (a[m] <= x){ ans = m; l = m+1; }
        else r = m-1;
    }
    return ans;
}

int main(){
    cout<<"Test1 idx: "<<floorIndex({1,2,8,10,11,12,19}, 5)<<" (expected 1 -> value 2)\n";
    cout<<"Test2 idx: "<<floorIndex({2,3,5,9}, 1)<<" (expected -1)\n";
    return 0;
}
