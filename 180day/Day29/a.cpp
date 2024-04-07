#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
    if (n == 0) {
        return 0; // No elements in the array
    }

    int index = 0; // Index for the modified array

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[index++] = arr[i]; // Copy distinct elements to the modified array
        }
    }

    arr[index++] = arr[n - 1]; // Copy the last element

    return index; // Return the new size of the array without duplicates
}

int main() {
    int n = 10;
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 5, 5};

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    int newSize = removeDuplicates(arr, n);

    cout << "\nArray after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nNew size: " << newSize << endl;

    return 0;
}
