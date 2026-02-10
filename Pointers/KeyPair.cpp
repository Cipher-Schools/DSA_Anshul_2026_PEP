// GeeksforGeeks: Key Pair
// https://www.geeksforgeeks.org/problems/key-pair5616/1

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool hasPairWithSum(const vector<int>& arr, int sum) {
    unordered_set<int> seen;
    for (int x : arr) {
        if (seen.count(sum - x)) return true;
        seen.insert(x);
    }
    return false;
}

int main(){
    cout<<boolalpha;
    cout<<"Test1 (expected true): "<<hasPairWithSum({1,4,45,6,10,8}, 16)<<"\n";
    cout<<"Test2 (expected false): "<<hasPairWithSum({1,2,4}, 8)<<"\n";
    cout<<"Test3 (expected true): "<<hasPairWithSum({0, -1, 2, -3, 1}, -2)<<"\n";
    return 0;
}
