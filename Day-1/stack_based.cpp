// Optimal Stack-Based Approach - Time Complexity: O(n)
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<long long> nextLargerElement(vector<long long> arr, int n) {
    vector<long long> res(n);
    stack<long long> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }
        res[i] = st.empty() ? -1 : st.top();
        st.push(arr[i]);
    }

    return res;
}

int main() {
    vector<long long> arr = {4, 5, 2, 25};
    vector<long long> res = nextLargerElement(arr, arr.size());

    for (auto val : res) cout << val << " ";
    return 0;
}
