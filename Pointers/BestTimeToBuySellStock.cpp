// LeetCode: Best Time to Buy and Sell Stock
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int maxProfit(const vector<int>& prices) {
    int minPrice = INT_MAX;
    int profit = 0;
    for (int p : prices) {
        minPrice = min(minPrice, p);
        profit = max(profit, p - minPrice);
    }
    return profit;
}

int main(){
    cout<<"Test1: "<<maxProfit({7,1,5,3,6,4})<<"\n";
    cout<<"Test2: "<<maxProfit({7,6,4,3,1})<<"\n";
    cout<<"Test3: "<<maxProfit({1,2,3,4,5})<<"\n";
    return 0;
}
