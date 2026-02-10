// GeeksforGeeks: Reverse array in groups
// https://www.geeksforgeeks.org/problems/reverse-array-in-groups0255/1

#include <bits/stdc++.h>
using namespace std;

void reverseInGroups(vector<int>& arr, int k){
    for (int i = 0; i < (int)arr.size(); i += k)
        reverse(arr.begin() + i, arr.begin() + min((int)arr.size(), i + k));
}

void print(const vector<int>& a){ for(int x:a) cout<<x<<" "; cout<<"\n"; }

int main(){
    vector<int> t1 = {1,2,3,4,5,6,7,8}; reverseInGroups(t1, 3); cout<<"Test1: "; print(t1); // expected 3 2 1 6 5 4 8 7
    vector<int> t2 = {1,2,3,4,5}; reverseInGroups(t2, 2); cout<<"Test2: "; print(t2); // expected 2 1 4 3 5
    vector<int> t3 = {1}; reverseInGroups(t3, 3); cout<<"Test3: "; print(t3); // expected 1
    return 0;
}
