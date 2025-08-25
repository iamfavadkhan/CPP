#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; ) {
            if (arr[i] == arr[j]) {
                // Shift elements left
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; // reduce size
            } else {
                j++;
            }
        }
    }
    return n; // new size after duplicates removed
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int n = 7;

    n = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

