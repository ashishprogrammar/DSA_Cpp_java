#include <iostream>
#include <deque>
using namespace std;

void printMaxInSubarrays(int arr[], int n, int k) {
    deque<int> dq; // Will store indices of useful elements in current window

    // Process first k elements
    for (int i = 0; i < k; i++) {
        while (!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }

    // Process the rest of the elements
    for (int i = k; i < n; i++) {
        // The element at the front is the largest of the previous window
        cout << arr[dq.front()] << " ";

        // Remove elements out of this window
        while (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        // Remove all elements smaller than the current one
        while (!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back();

        dq.push_back(i);
    }

    // Print the maximum of the last window
    cout << arr[dq.front()] << endl;
}

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter window size (k): ";
    cin >> k;

    cout << "Maximums of subarrays of size " << k << " are: ";
    printMaxInSubarrays(arr, n, k);

    return 0;
}
