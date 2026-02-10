// LeetCode: Minimum swaps to group all 1's together II
// https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/description/

#include <bits/stdc++.h>
using namespace std;

int minSwapsGroupOnesII(const vector<int>& nums){
    int ones = 0;
    for (int x: nums) if (x==1) ++ones;
    if (ones<=1) return 0;
    int n = nums.size();
    int curr = 0;
    for (int i=0;i<ones;++i) curr += nums[i%n];
    int best = curr;
    for (int i=1;i<n;++i){
        curr += nums[(i+ones-1)%n];
        curr -= nums[i-1];
        best = max(best, curr);
    }
    return ones - best; // swaps = window size - #ones in best window
}

int main(){
    cout<<"Test1: "<<minSwapsGroupOnesII({0,1,0,1,1,0,0})<<"\n"; // expected 1
    cout<<"Test2: "<<minSwapsGroupOnesII({1,0,1,0,1})<<"\n"; // expected 1
    cout<<"Test3: "<<minSwapsGroupOnesII({0,0,0,0})<<"\n"; // expected 0
    return 0;
}
