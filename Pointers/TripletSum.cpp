// GeeksforGeeks: Triplet Sum in Array
// https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool find3Numbers(vector<int> a, int sum) {
    sort(a.begin(), a.end());
    int n = a.size();
    for (int i = 0; i < n - 2; ++i) {
        int l = i + 1, r = n - 1;
        while (l < r) {
            int s = a[i] + a[l] + a[r];
            if (s == sum) return true;
            else if (s < sum) ++l; else --r;
        }
    }
    return false;
}

int main(){
    cout<<boolalpha;
    cout<<"Test1 (expected true): "<<find3Numbers({1,4,45,6,10,8}, 22)<<"\n";
    cout<<"Test2 (expected false): "<<find3Numbers({1,2,4,3,6}, 50)<<"\n";
    cout<<"Test3 (expected true): "<<find3Numbers({0,-1,2,-3,1}, 0)<<"\n";
    return 0;
}
