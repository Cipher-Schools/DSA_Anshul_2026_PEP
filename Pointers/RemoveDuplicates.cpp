// LeetCode: Remove Duplicates from Sorted Array
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    int pos = 0;
    for (int i = 1; i < (int)nums.size(); ++i)
        if (nums[i] != nums[pos]) nums[++pos] = nums[i];
    return pos + 1;
}

void printVec(const vector<int>& v, int len){ for(int i=0;i<len;i++) cout<<v[i]<<" "; cout<<"\n"; }

int main(){
    vector<int> a1 = {1,1,2}; int l1 = removeDuplicates(a1); cout<<"Test1 len="<<l1<<" arr:"; printVec(a1,l1); // expected len=2 arr=1 2
    vector<int> a2 = {0,0,1,1,1,2,2,3,3,4}; int l2 = removeDuplicates(a2); cout<<"Test2 len="<<l2<<" arr:"; printVec(a2,l2); // expected len=5 arr=0 1 2 3 4
    vector<int> a3 = {};
    int l3 = removeDuplicates(a3); cout<<"Test3 len="<<l3<<"\n"; // expected 0
    return 0;
}
