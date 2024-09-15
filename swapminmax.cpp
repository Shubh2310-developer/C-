#include <iostream>
#include <climits>
#include <algorithm> // Include for std::swap

using namespace std;

void swapMinMax(int arr[], int size) {
    if (size <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return;
    }

    int minIndex = 0; // Declare minIndex
    int maxIndex = 0; // Declare maxIndex
    int minValue = INT_MAX;
    int maxValue = INT_MIN;

    for (int i = 0; i < size; ++i) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }

    if (minIndex != maxIndex) { // Ensure min and max are not the same element
        swap(arr[minIndex], arr[maxIndex]);
    }
}

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    swapMinMax(arr, size);

    cout << "Array after swapping min and max: ";
    printArray(arr, size);

    return 0;
}
