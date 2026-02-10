#include <iostream>
using namespace std;

bool isSorted(int arr[], int index, int n) {
    // Base case: if we reached the last element
    if (index == n - 1)
        return true;

    // If current element is greater than next element
    if (arr[index] > arr[index + 1])
        return false;

    // Check the rest of the array
    return isSorted(arr, index + 1, n);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    if (isSorted(arr, 0, n))
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";

    return 0;
}
