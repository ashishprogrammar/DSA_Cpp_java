#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string input;
    cin >> input;

    while (b--) {
        int i = 0;
        while (i < a - 1) {
            if (input[i] == 'B' && input[i + 1] == 'G') {
                swap(input[i], input[i + 1]);
                i += 2; // skip next because they just swapped
            } else {
                i++;
            }
        }
    }

    cout << input;
    return 0;
}
