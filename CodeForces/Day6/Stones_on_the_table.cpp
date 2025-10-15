#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int count = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            count++; // same color as previous → need to remove one
        }
    }

    cout << count << endl;
    return 0;
}
