// GeeksforGeeks: Subarray with given sum (positive numbers)
// https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

#include <bits/stdc++.h>
using namespace std;

pair<int,int> subarrayWithSum(const vector<int>& arr, int target){
    int l=0, r=0, sum=0;
    while (r <= (int)arr.size()){
        if (sum == target) return {l, r-1};
        if (sum < target){
            if (r==arr.size()) break;
            sum += arr[r++];
        } else {
            sum -= arr[l++];
        }
    }
    return {-1,-1};
}

int main(){
    auto p1 = subarrayWithSum({1,2,3,7,5}, 12); cout<<"Test1: "<<p1.first<<","<<p1.second<<"\n"; // expected 2,3 (0-based -> 3+7)
    auto p2 = subarrayWithSum({1,4,20,3,10,5}, 33); cout<<"Test2: "<<p2.first<<","<<p2.second<<"\n"; // expected 2,4
    auto p3 = subarrayWithSum({1,2,3}, 7); cout<<"Test3: "<<p3.first<<","<<p3.second<<"\n"; // expected -1,-1
    return 0;
}
