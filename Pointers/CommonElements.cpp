// GeeksforGeeks: Common elements in three sorted arrays
// https://www.geeksforgeeks.org/problems/common-elements1132/1

#include <iostream>
#include <vector>
using namespace std;

vector<int> commonElements(const vector<int>& A, const vector<int>& B, const vector<int>& C) {
    int i=0,j=0,k=0; vector<int> res;
    while(i<A.size() && j<B.size() && k<C.size()){
        if (A[i]==B[j] && B[j]==C[k]){
            if (res.empty() || res.back()!=A[i]) res.push_back(A[i]);
            ++i; ++j; ++k;
        } else if (A[i] < B[j]) ++i;
        else if (B[j] < C[k]) ++j;
        else ++k;
    }
    return res;
}

void printVec(const vector<int>& v){ for(int x:v) cout<<x<<" "; cout<<"\n"; }

int main(){
    auto r1 = commonElements({1,5,10,20,40,80}, {6,7,20,80,100}, {3,4,15,20,30,70,80,120});
    cout<<"Test1: "; printVec(r1); // expected 20 80

    auto r2 = commonElements({1,2,3}, {4,5,6}, {7,8,9});
    cout<<"Test2: "; printVec(r2); // expected (empty)

    auto r3 = commonElements({1,1,2,2}, {1,1,2,2}, {1,2,2});
    cout<<"Test3: "; printVec(r3); // expected 1 2
    return 0;
}
