// LeetCode: Is Subsequence
// https://leetcode.com/problems/is-subsequence/description/

#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(const string& s, const string& t){
    int i=0,j=0;
    while(i<s.size() && j<t.size()){
        if (s[i]==t[j]) ++i;
        ++j;
    }
    return i==s.size();
}

int main(){
    cout<<boolalpha;
    cout<<"Test1: "<<isSubsequence("abc","ahbgdc")<<"\n"; // true
    cout<<"Test2: "<<isSubsequence("axc","ahbgdc")<<"\n"; // false
}
