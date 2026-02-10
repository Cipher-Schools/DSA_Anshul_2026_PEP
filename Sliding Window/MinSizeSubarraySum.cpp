// LeetCode: Minimum Size Subarray Sum
// https://leetcode.com/problems/minimum-size-subarray-sum/description/

#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(int s, const vector<int>& nums) {
    int l=0, sum=0, best=INT_MAX;
    for (int r=0;r<(int)nums.size();++r){
        sum += nums[r];
        while (sum >= s){
            best = min(best, r-l+1);
            sum -= nums[l++];
        }
    }
    return best==INT_MAX?0:best;
}

int main(){
    cout<<"Test1: "<<minSubArrayLen(7, {2,3,1,2,4,3})<<"\n"; // expected 2
    cout<<"Test2: "<<minSubArrayLen(11, {1,2,3,4,5})<<"\n"; // expected 3
    cout<<"Test3: "<<minSubArrayLen(100, {1,2,3})<<"\n"; // expected 0
    return 0;
}
