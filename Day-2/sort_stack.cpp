#include <bits/stdc++.h>
using namespace std;

// Inserts element x into stack s so that s remains sorted (descending, largest on top)
void insertSorted(stack<int>& s, int x) {
    if (s.empty() || s.top() <= x) {
        s.push(x);
        return;
    }
    int temp = s.top(); s.pop();
    insertSorted(s, x);
    s.push(temp);
}

// Sorts the stack in descending order (largest elements on top)
void sortStack(stack<int>& s) {
    if (s.empty()) return;
    int topElem = s.top(); s.pop();
    sortStack(s);
    insertSorted(s, topElem);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    stack<int> s;
    while (n--) {
        int x; cin >> x;
        s.push(x);
    }

    sortStack(s);

    vector<int> out;
    while (!s.empty()) {
        out.push_back(s.top());
        s.pop();
    }

    for (int num : out)
        cout << num << " ";
    cout << "\n";

    return 0;
}
