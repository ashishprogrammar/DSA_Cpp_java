#include <iostream>
#include <string>
using namespace std;

bool distinct(int year) {
    string s = to_string(year);
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (s[i] == s[j]) return false;
        }
    }
    return true;
}

int main() {
    int y;
    cin >> y;
    while (true) {
        y++;
        if (distinct(y)) {
            cout << y;
            break;
        }
    }
    return 0;
}
