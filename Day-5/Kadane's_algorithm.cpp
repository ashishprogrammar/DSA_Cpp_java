#include <iostream>
using namespace std;

// Function to implement Kadane's Algorithm
int kadane(int arr[], int n) {
    int max_so_far = arr[0];
    int curr_max = arr[0];

    for (int i = 1; i < n; i++) {
        curr_max = max(arr[i], curr_max + arr[i]); // Either take current element or extend the subarray
        max_so_far = max(max_so_far, curr_max);    // Update max if needed
    }
    return max_so_far;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_sum = kadane(arr, n);
    cout << "Maximum subarray sum is: " << max_sum << endl;

    return 0;
}
