// LeetCode: Valid Anagram
// https://leetcode.com/problems/valid-anagram/description/

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){
    if (s.size() != t.size()) return false;
    array<int,26> cnt{};
    for (char c: s) ++cnt[c-'a'];
    for (char c: t) --cnt[c-'a'];
    for (int x: cnt) if (x!=0) return false;
    return true;
}

int main(){
    cout<<boolalpha;
    cout<<"Test1: "<<isAnagram("anagram","nagaram")<<"\n"; // true
    cout<<"Test2: "<<isAnagram("rat","car")<<"\n"; // false
    cout<<"Test3: "<<isAnagram("","")<<"\n"; // true
}
