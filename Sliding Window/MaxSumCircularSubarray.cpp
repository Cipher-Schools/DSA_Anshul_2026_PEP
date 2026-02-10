// LeetCode: Maximum Sum Circular Subarray
// https://leetcode.com/problems/maximum-sum-circular-subarray/description/

#include <bits/stdc++.h>
using namespace std;

int maxSubarrayCircular(const vector<int>& A){
    int total=0, max_ending=INT_MIN, min_ending=INT_MAX;
    int cur_max=0, cur_min=0;
    for (int x: A){
        cur_max = max(x, cur_max + x);
        max_ending = max(max_ending, cur_max);
        cur_min = min(x, cur_min + x);
        min_ending = min(min_ending, cur_min);
        total += x;
    }
    if (max_ending < 0) return max_ending;
    return max(max_ending, total - min_ending);
}

int main(){
    cout<<"Test1: "<<maxSubarrayCircular({1,-2,3,-2})<<"\n"; // expected 3
    cout<<"Test2: "<<maxSubarrayCircular({5,-3,5})<<"\n"; // expected 10
    cout<<"Test3: "<<maxSubarrayCircular({-3,-2,-3})<<"\n"; // expected -2
    return 0;
}
