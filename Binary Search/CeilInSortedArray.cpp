// GeeksforGeeks: Ceil in a sorted array
// https://www.geeksforgeeks.org/problems/ceil-in-a-sorted-array/1

#include <bits/stdc++.h>
using namespace std;

// returns index of ceil (smallest element >= x), or -1 if none
int ceilIndex(const vector<int>& a, int x){
    int l=0, r=a.size()-1, ans=-1;
    while(l<=r){
        int m = l + (r-l)/2;
        if (a[m] >= x){ ans = m; r = m-1; }
        else l = m+1;
    }
    return ans;
}

int main(){
    cout<<"Test1 idx: "<<ceilIndex({1,2,8,10,11,12,19}, 5)<<" (expected 2 -> value 8)\n";
    cout<<"Test2 idx: "<<ceilIndex({2,3,5,9}, 10)<<" (expected -1)\n";
    return 0;
}
