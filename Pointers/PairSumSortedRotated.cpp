// GeeksforGeeks: Pair Sum in a Sorted and Rotated Array
// https://www.geeksforgeeks.org/problems/pair-sum-in-a-sorted-and-rotated-array/1

#include <iostream>
#include <vector>
using namespace std;

bool pairInSortedRotated(const vector<int>& arr, int sum) {
    int n = arr.size();
    int i;
    for (i = 0; i < n - 1; ++i)
        if (arr[i] > arr[i+1]) break;
    int l = (i + 1) % n; // smallest
    int r = i; // largest
    while (l != r) {
        int s = arr[l] + arr[r];
        if (s == sum) return true;
        if (s < sum) l = (l + 1) % n; else r = (r - 1 + n) % n;
    }
    return false;
}

int main(){
    cout<<boolalpha;
    cout<<"Test1 (expected true): "<<pairInSortedRotated({11,15,6,7,9,10}, 16)<<"\n";
    cout<<"Test2 (expected true): "<<pairInSortedRotated({4,5,1,2,3}, 8)<<"\n";
    cout<<"Test3 (expected false): "<<pairInSortedRotated({10,12,14,2,4,6,8}, 25)<<"\n";
    return 0;
}
