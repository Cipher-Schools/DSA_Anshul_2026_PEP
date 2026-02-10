// LeetCode: Maximum Subarray
// https://leetcode.com/problems/maximum-subarray/description/

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(const vector<int>& nums){
    int best = INT_MIN, cur = 0;
    for (int x: nums){
        cur = max(x, cur + x);
        best = max(best, cur);
    }
    return best;
}

int main(){
    cout<<"Test1: "<<maxSubArray({-2,1,-3,4,-1,2,1,-5,4})<<"\n"; // expected 6
    cout<<"Test2: "<<maxSubArray({1})<<"\n"; // expected 1
    cout<<"Test3: "<<maxSubArray({-1,-2,-3})<<"\n"; // expected -1
    return 0;
}
