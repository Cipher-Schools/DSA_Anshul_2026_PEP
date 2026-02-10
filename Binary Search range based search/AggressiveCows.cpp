// GeeksforGeeks: Aggressive Cows
// https://www.geeksforgeeks.org/problems/aggressive-cows/1

#include <bits/stdc++.h>
using namespace std;

bool canPlace(const vector<int>& stalls, int k, int dist){
    int placed = 1; int last = stalls[0];
    for (int i=1;i<(int)stalls.size() && placed<k;++i){
        if (stalls[i] - last >= dist){ ++placed; last = stalls[i]; }
    }
    return placed >= k;
}

int aggressiveCows(vector<int> stalls, int k){
    sort(stalls.begin(), stalls.end());
    int lo = 0, hi = stalls.back() - stalls.front();
    while (lo < hi){
        int mid = lo + (hi - lo + 1) / 2;
        if (canPlace(stalls, k, mid)) lo = mid; else hi = mid - 1;
    }
    return lo;
}

int main(){
    cout<<"Test1: "<<aggressiveCows({1,2,8,4,9}, 3)<<"\n"; // expected 3
    cout<<"Test2: "<<aggressiveCows({0,4,7,10}, 2)<<"\n"; // expected 10
    return 0;
}
