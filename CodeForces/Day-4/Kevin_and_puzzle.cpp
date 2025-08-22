#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool valid = true;

        // Check if the pattern forces a contradiction
        for (int i = 1; i < n; ++i) {
            if (s[i - 1] == 'R' && s[i] == 'L') {
                valid = false;
                break;
            }
        }

        if (!valid) {
            cout << -1 << '\n';
        } else {
            for (int i = 0; i < n; ++i) {
                cout << i << " ";
            }
            cout << '\n';
        }
    }

    return 0;
}
