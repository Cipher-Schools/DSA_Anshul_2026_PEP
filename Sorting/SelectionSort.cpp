#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selectionSort(vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j)
            if (a[j] < a[minIdx])
                minIdx = j;
        if (minIdx != i)
            swap(a[i], a[minIdx]);
    }
}

void printArray(const vector<int>& a) {
    for (int x : a) cout << x << " ";
    cout << '\n';
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    cout << "Original: "; printArray(arr);
    selectionSort(arr);
    cout << "Sorted:   "; printArray(arr);
    return 0;
}
