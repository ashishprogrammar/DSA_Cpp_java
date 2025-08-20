#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases

    while (t--) {
        int n;
        cin >> n; // size of multiset

        int S[55]; // store elements
        int sum = 0;
        bool present[105] = {false}; // track which numbers appear

        for (int i = 0; i < n; i++) {
            cin >> S[i];
            sum += S[i];
            present[S[i]] = true;
        }

        // find mex (smallest non-negative integer not in set)
        int mex = 0;
        while (present[mex]) {
            mex++;
        }

        cout << (sum + mex) << "\n";
    }

    return 0;
}
