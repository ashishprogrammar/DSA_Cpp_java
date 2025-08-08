#include <iostream>
using namespace std;

#define MAX 500  // Maximum digits in output

// Function to multiply number x with the number represented by result[]
int multiply(int x, int result[], int result_size) {
    int carry = 0;

    for (int i = 0; i < result_size; i++) {
        int prod = result[i] * x + carry;
        result[i] = prod % 10;
        carry = prod / 10;
    }

    // Put carry in result[]
    while (carry) {
        result[result_size] = carry % 10;
        carry = carry / 10;
        result_size++;
    }

    return result_size;
}

// Function to compute factorial and print it
void factorial(int n) {
    int result[MAX];

    // Initialize result
    result[0] = 1;
    int result_size = 1;

    // Multiply numbers from 2 to n
    for (int x = 2; x <= n; x++)
        result_size = multiply(x, result, result_size);

    // Print result in reverse order
    for (int i = result_size - 1; i >= 0; i--)
        cout << result[i];
    cout << endl;
}

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        factorial(n);
    }

    return 0;
}
