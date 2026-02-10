// LeetCode: Sort Colors
// https://leetcode.com/problems/sort-colors/description/

#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high) {
        if (nums[mid] == 0) swap(nums[low++], nums[mid++]);
        else if (nums[mid] == 1) ++mid;
        else swap(nums[mid], nums[high--]);
    }
}

void printVec(const vector<int>& v){ for(int x:v) cout<<x<<" "; cout<<"\n"; }

int main(){
    vector<int> t1 = {2,0,2,1,1,0}; sortColors(t1); cout<<"Test1: "; printVec(t1); // 0 0 1 1 2 2
    vector<int> t2 = {2,0,1}; sortColors(t2); cout<<"Test2: "; printVec(t2); // 0 1 2
    vector<int> t3 = {0}; sortColors(t3); cout<<"Test3: "; printVec(t3); // 0
    return 0;
}
