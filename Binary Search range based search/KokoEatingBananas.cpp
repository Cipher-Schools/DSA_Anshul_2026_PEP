// LeetCode: Koko Eating Bananas
// https://leetcode.com/problems/koko-eating-bananas/description/

#include <bits/stdc++.h>
using namespace std;

long long hoursNeeded(const vector<int>& piles, long long k){
    long long hours = 0;
    for (long long p : piles) hours += (p + k - 1) / k;
    return hours;
}

int minEatingSpeed(const vector<int>& piles, long long H){
    long long lo = 1, hi = *max_element(piles.begin(), piles.end());
    while (lo < hi){
        long long mid = lo + (hi - lo) / 2;
        if (hoursNeeded(piles, mid) <= H) hi = mid; else lo = mid + 1;
    }
    return (int)lo;
}

int main(){
    cout<<"Test1: "<<minEatingSpeed({3,6,7,11}, 8)<<"\n"; // expected 4
    cout<<"Test2: "<<minEatingSpeed({30,11,23,4,20}, 5)<<"\n"; // expected 30
    return 0;
}
