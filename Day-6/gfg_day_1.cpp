#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        int i = n - 2;

        // Step 1: Find first decreasing element from right
        while (i >= 0 && arr[i] >= arr[i + 1]) i--;

        if (i >= 0) {
            // Step 2: Find element just larger than arr[i]
            int j = n - 1;
            while (arr[j] <= arr[i]) j--;
            swap(arr[i], arr[j]);
        }

        // Step 3: Reverse the suffix
        reverse(arr.begin() + i + 1, arr.end());
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    Solution obj;
    obj.nextPermutation(arr);

    for (int x : arr) cout << x << " ";
    cout << "\n";

    return 0;
}
