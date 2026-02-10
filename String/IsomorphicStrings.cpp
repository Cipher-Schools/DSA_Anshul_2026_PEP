// LeetCode: Isomorphic Strings
// https://leetcode.com/problems/isomorphic-strings/description/

#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(const string& s, const string& t){
    if (s.size() != t.size()) return false;
    unordered_map<char,char> m1; unordered_set<char> used;
    for (int i=0;i<s.size();++i){
        char cs = s[i], ct = t[i];
        if (m1.count(cs)){
            if (m1[cs] != ct) return false;
        } else {
            if (used.count(ct)) return false;
            m1[cs] = ct; used.insert(ct);
        }
    }
    return true;
}

int main(){
    cout<<boolalpha;
    cout<<"Test1: "<<isIsomorphic("egg","add")<<"\n"; // true
    cout<<"Test2: "<<isIsomorphic("foo","bar")<<"\n"; // false
    cout<<"Test3: "<<isIsomorphic("paper","title")<<"\n"; // true
}
