// LeetCode: Sqrt(x)
// https://leetcode.com/problems/sqrtx/description/

#include <bits/stdc++.h>
using namespace std;

int mySqrt(long long x) {
    if (x < 2) return (int)x;
    long long l = 1, r = x/2, ans = 0;
    while (l <= r) {
        long long m = l + (r - l) / 2;
        long long sq = m * m;
        if (sq == x) return (int)m;
        if (sq < x) { ans = m; l = m + 1; }
        else r = m - 1;
    }
    return (int)ans;
}

int main(){
    cout<<"Test1: "<<mySqrt(4)<<"\n"; // expected 2
    cout<<"Test2: "<<mySqrt(8)<<"\n"; // expected 2
    cout<<"Test3: "<<mySqrt(0)<<"\n"; // expected 0
    return 0;
}
