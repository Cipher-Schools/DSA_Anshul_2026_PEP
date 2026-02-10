#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& a) {
    int n = a.size();
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break; // already sorted
    }
}

void printArray(const vector<int>& a) {
    for (int x : a) cout << x << " ";
    cout << '\n';
}

int main() {
    vector<int> arr = {5, 1, 4, 2, 8};
    cout << "Original: "; printArray(arr);
    bubbleSort(arr);
    cout << "Sorted:   "; printArray(arr);
    return 0;
}
