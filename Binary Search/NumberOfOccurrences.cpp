// GeeksforGeeks: Number of occurrence
// https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1

#include <bits/stdc++.h>
using namespace std;

int firstOcc(const vector<int>& a, int x){
    int l=0,r=a.size()-1,ans=-1;
    while(l<=r){int m=l+(r-l)/2; if(a[m]==x){ans=m; r=m-1;} else if(a[m]<x) l=m+1; else r=m-1;}
    return ans;
}
int lastOcc(const vector<int>& a, int x){
    int l=0,r=a.size()-1,ans=-1;
    while(l<=r){int m=l+(r-l)/2; if(a[m]==x){ans=m; l=m+1;} else if(a[m]<x) l=m+1; else r=m-1;}
    return ans;
}

int countOccurrences(const vector<int>& a, int x){
    int f = firstOcc(a,x);
    if (f==-1) return 0;
    return lastOcc(a,x) - f + 1;
}

int main(){
    cout<<"Test1: "<<countOccurrences({1,2,2,2,3,4}, 2)<<"\n"; // expected 3
    cout<<"Test2: "<<countOccurrences({1,1,2,3,4}, 5)<<"\n"; // expected 0
    return 0;
}
