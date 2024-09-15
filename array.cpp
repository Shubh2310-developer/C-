#include<iostream>
#include<climits>
using namespace std;

int main(){
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex = -1;
    int largestIndex = -1;

    for (int i = 0; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];      // Update the smallest value
            smallestIndex = i;       // Update the index of the smallest value
        }
        if (nums[i] > largest) {
            largest = nums[i];       // Update the largest value
            largestIndex = i;        // Update the index of the largest value
        }
    }

    cout << "Smallest value = " << smallest << endl;
    cout << "Index of the smallest value = " << smallestIndex << endl;
    cout << "Largest value = " << largest << endl;
    cout << "Index of the largest value = " << largestIndex << endl;

    return 0;
}

