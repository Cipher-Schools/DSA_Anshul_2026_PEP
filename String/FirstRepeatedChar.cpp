// GeeksforGeeks: Find first repeated character
// https://www.geeksforgeeks.org/problems/find-first-repeated-character4108/1

#include <bits/stdc++.h>
using namespace std;

// returns the first character that repeats (earliest index of first repetition), or '\0' if none
char firstRepeatedChar(const string& s){
    unordered_map<char,int> idx;
    char ans = '\0'; int best = INT_MAX;
    for (int i=0;i<s.size();++i){
        if (idx.count(s[i])){
            if (idx[s[i]] < best){ best = idx[s[i]]; ans = s[i]; }
        } else idx[s[i]] = i;
    }
    return ans;
}

int main(){
    cout<<"Test1: "; char r1 = firstRepeatedChar("geeksforgeeks"); if(r1) cout<<r1<<"\n"; else cout<<"None\n"; // expected g
    cout<<"Test2: "; char r2 = firstRepeatedChar("abc"); if(r2) cout<<r2<<"\n"; else cout<<"None\n"; // expected None
    return 0;
}
