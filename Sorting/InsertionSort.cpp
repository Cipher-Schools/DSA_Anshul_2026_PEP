#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& a) {
    int n = a.size();
    for (int i = 1; i < n; ++i) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = key;
    }
}

void printArray(const vector<int>& a) {
    for (int x : a) cout << x << " ";
    cout << '\n';
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6};
    cout << "Original: "; printArray(arr);
    insertionSort(arr);
    cout << "Sorted:   "; printArray(arr);
    return 0;
}
