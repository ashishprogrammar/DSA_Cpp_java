// Brute Force Approach - Time Complexity: O(n^2)
#include <iostream>
#include <vector>
using namespace std;

vector<long long> nextLargerElement(vector<long long> arr, int n) {
    vector<long long> res(n, -1);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                res[i] = arr[j];
                break;
            }
        }
    }
    return res;
}

int main() {
    vector<long long> arr = {4, 5, 2, 25};
    vector<long long> res = nextLargerElement(arr, arr.size());

    for (auto val : res) cout << val << " ";
    return 0;
}
