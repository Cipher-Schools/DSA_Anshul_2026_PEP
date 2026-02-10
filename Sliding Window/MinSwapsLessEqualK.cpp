// GeeksforGeeks: Minimum swaps required to bring all elements less than or equal to k together
// https://www.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1

#include <bits/stdc++.h>
using namespace std;

int minSwapsBringTogether(const vector<int>& arr, int k){
    int cnt = 0;
    for (int x: arr) if (x <= k) ++cnt;
    if (cnt <= 1) return 0;
    int bad = 0;
    for (int i=0;i<cnt;++i) if (arr[i] > k) ++bad;
    int best = bad;
    for (int i=1;i+cnt-1 < (int)arr.size(); ++i){
        if (arr[i-1] > k) --bad;
        if (arr[i+cnt-1] > k) ++bad;
        best = min(best, bad);
    }
    return best;
}

int main(){
    cout<<"Test1: "<<minSwapsBringTogether({2,1,5,6,3}, 3)<<"\n"; // expected 1
    cout<<"Test2: "<<minSwapsBringTogether({2,7,9,5,8,7,4}, 6)<<"\n"; // expected 2
    cout<<"Test3: "<<minSwapsBringTogether({1,2,3}, 3)<<"\n"; // expected 0
    return 0;
}
