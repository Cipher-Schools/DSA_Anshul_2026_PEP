// LeetCode: Valid Palindrome II
// https://leetcode.com/problems/valid-palindrome-ii/description/

#include <bits/stdc++.h>
using namespace std;

bool checkRange(const string& s, int i, int j){
    while(i<j){ if (s[i++] != s[j--]) return false; } return true;
}

bool validPalindrome(string s){
    int i=0,j=s.size()-1;
    while(i<j){
        if (s[i]==s[j]){ ++i; --j; }
        else return checkRange(s, i+1, j) || checkRange(s, i, j-1);
    }
    return true;
}

int main(){
    cout<<boolalpha;
    cout<<"Test1: "<<validPalindrome("aba")<<"\n"; // true
    cout<<"Test2: "<<validPalindrome("abca")<<"\n"; // true (remove 'c')
    cout<<"Test3: "<<validPalindrome("abc")<<"\n"; // false
}
