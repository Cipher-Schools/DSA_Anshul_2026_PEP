// GeeksforGeeks: Maximum sum subarray of size k
// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

#include <bits/stdc++.h>
using namespace std;

int maxSumSizeK(const vector<int>& a, int k){
    if (k > (int)a.size()) return 0;
    int sum = 0, best = INT_MIN;
    for (int i = 0; i < (int)a.size(); ++i){
        sum += a[i];
        if (i >= k) sum -= a[i-k];
        if (i >= k-1) best = max(best, sum);
    }
    return best;
}

int main(){
    cout<<"Test1: "<<maxSumSizeK({1,4,2,10,23,3,1,0,20},4)<<"\n"; // expected 39 (10+23+3+1+? actually check expected 39)
    cout<<"Test2: "<<maxSumSizeK({2,3},3)<<"\n"; // expected 0 (k>n)
    cout<<"Test3: "<<maxSumSizeK({-1, -2, -3, -4},2)<<"\n"; // expected -3
    return 0;
}
