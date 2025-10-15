#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Extract digits only (skip '+')
    string digits = "";
    for (char c : s) {
        if (c != '+')
            digits += c;
    }

    // Sort digits
    sort(digits.begin(), digits.end());

    // Rebuild sorted expression
    for (int i = 0; i < digits.size(); i++) {
        cout << digits[i];
        if (i != digits.size() - 1)
            cout << "+";
    }

    cout << endl;
    return 0;
}
