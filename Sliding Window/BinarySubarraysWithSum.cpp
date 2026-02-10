// LeetCode: Binary Subarrays With Sum
// https://leetcode.com/problems/binary-subarrays-with-sum/description/

#include <bits/stdc++.h>
using namespace std;

long long numSubarraysWithSum(const vector<int>& A, int S){
    unordered_map<int,int> cnt; cnt[0]=1;
    int pref=0; long long res=0;
    for (int x: A){
        pref += x;
        if (cnt.count(pref - S)) res += cnt[pref - S];
        ++cnt[pref];
    }
    return res;
}

int main(){
    cout<<"Test1: "<<numSubarraysWithSum({1,0,1,0,1}, 2)<<"\n"; // expected 4
    cout<<"Test2: "<<numSubarraysWithSum({0,0,0,0,0}, 0)<<"\n"; // expected 15 (n*(n+1)/2)
    cout<<"Test3: "<<numSubarraysWithSum({1,1,1}, 3)<<"\n"; // expected 1
    return 0;
}
