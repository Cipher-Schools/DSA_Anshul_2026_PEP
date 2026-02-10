// GeeksforGeeks: Allocate Minimum Pages
// https://practice.geeksforgeeks.org/problems/allocate-minimum-pages/0

#include <bits/stdc++.h>
using namespace std;

bool feasible(const vector<int>& arr, int students, long long maxPages){
    int req = 1; long long cur = 0;
    for (int x : arr){
        if (x > maxPages) return false;
        if (cur + x > maxPages){ ++req; cur = x; }
        else cur += x;
    }
    return req <= students;
}

long long allocatePages(const vector<int>& arr, int students){
    if (students > (int)arr.size()) return -1;
    long long lo = *max_element(arr.begin(), arr.end()), hi = accumulate(arr.begin(), arr.end(), 0LL);
    while (lo < hi){
        long long mid = lo + (hi - lo) / 2;
        if (feasible(arr, students, mid)) hi = mid; else lo = mid + 1;
    }
    return lo;
}

int main(){
    cout<<"Test1: "<<allocatePages({10,20,30,40}, 2)<<"\n"; // expected 60
    cout<<"Test2: "<<allocatePages({12,34,67,90}, 2)<<"\n"; // expected 113
    return 0;
}
