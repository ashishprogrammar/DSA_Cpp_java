#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[55]; // since n ≤ 50
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int cutoff = a[k - 1]; // score of k-th participant
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] >= cutoff && a[i] > 0)
            count++;
    }

    cout << count << endl;
    return 0;
}
