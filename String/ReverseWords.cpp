// LeetCode: Reverse Words in a String
// https://leetcode.com/problems/reverse-words-in-a-string/description/

#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s){
    int n = s.size(); vector<string> words; string cur;
    for (int i=0;i<n;++i){
        if (!isspace((unsigned char)s[i])) cur.push_back(s[i]);
        else if (!cur.empty()){ words.push_back(cur); cur.clear(); }
    }
    if (!cur.empty()) words.push_back(cur);
    reverse(words.begin(), words.end());
    string res;
    for (int i=0;i<words.size();++i){ if (i) res.push_back(' '); res += words[i]; }
    return res;
}

int main(){
    cout<<"Test1: '"<<reverseWords("the sky is blue")<<"'\n"; // 'blue is sky the'
    cout<<"Test2: '"<<reverseWords("  hello world  ")<<"'\n"; // 'world hello'
    cout<<"Test3: '"<<reverseWords("a good   example")<<"'\n"; // 'example good a'
    return 0;
}
