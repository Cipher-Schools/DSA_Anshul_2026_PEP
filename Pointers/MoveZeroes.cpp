// LeetCode: Move Zeroes
// https://leetcode.com/problems/move-zeroes/description/

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int pos = 0;
    for (int x : nums) if (x != 0) nums[pos++] = x;
    while (pos < (int)nums.size()) nums[pos++] = 0;
}

void printVec(const vector<int>& v){ for(int x:v) cout<<x<<" "; cout<<"\n"; }

int main(){
    vector<int> t1 = {0,1,0,3,12};
    moveZeroes(t1); cout<<"Test1: "; printVec(t1); // expected 1 3 12 0 0

    vector<int> t2 = {0};
    moveZeroes(t2); cout<<"Test2: "; printVec(t2); // expected 0

    vector<int> t3 = {4,2,4,0,0,3,0,5,1,0};
    moveZeroes(t3); cout<<"Test3: "; printVec(t3); // expected 4 2 4 3 5 1 0 0 0 0
    return 0;
}
