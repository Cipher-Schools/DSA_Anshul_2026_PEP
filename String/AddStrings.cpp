// LeetCode: Add Strings
// https://leetcode.com/problems/add-strings/description/

#include <bits/stdc++.h>
using namespace std;

string addStrings(string a, string b){
    int i = a.size()-1, j = b.size()-1, carry = 0;
    string res;
    while(i>=0 || j>=0 || carry){
        int x = (i>=0? a[i--]-'0': 0) + (j>=0? b[j--]-'0': 0) + carry;
        res.push_back('0' + (x%10));
        carry = x/10;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    cout<<"Test1: "<<addStrings("11","123")<<"\n"; // 134
    cout<<"Test2: "<<addStrings("456","77")<<"\n"; // 533
    cout<<"Test3: "<<addStrings("0","0")<<"\n"; // 0
}
