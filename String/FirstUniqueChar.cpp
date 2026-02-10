// LeetCode: First Unique Character in a String
// https://leetcode.com/problems/first-unique-character-in-a-string/description/

#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(const string& s){
    array<int,26> cnt{};
    for (char c: s) ++cnt[c-'a'];
    for (int i=0;i<s.size();++i) if (cnt[s[i]-'a']==1) return i;
    return -1;
}

int main(){
    cout<<"Test1: "<<firstUniqChar("leetcode")<<"\n"; // expected 0
    cout<<"Test2: "<<firstUniqChar("loveleetcode")<<"\n"; // expected 2
    return 0;
}
