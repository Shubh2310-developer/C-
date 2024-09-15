#include <iostream>
using namespace std;

// Function to calculate the sum and product of an array
void calculateSumAndProduct(int arr[], int sz, int &sum, int &product) {
    sum = 0; // Initialize sum to 0
    product = 1; // Initialize product to 1

    for (int i = 0; i < sz; i++) {
        sum += arr[i]; // Add current element to sum
        product *= arr[i]; // Multiply current element to product
    }
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5}; // Sample array
    int sz = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array
    int sum = 0; // Variable to store sum
    int product = 1; // Variable to store product

    // Call the function to calculate sum and product
    calculateSumAndProduct(arr, sz, sum, product);

    // Output the results
    cout << "Sum of array elements: " << sum << endl;
    cout << "Product of array elements: " << product << endl;

    return 0;
}