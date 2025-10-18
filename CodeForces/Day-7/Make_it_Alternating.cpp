#include <bits/stdc++.h>
using namespace std;
const long long MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<long long> fact(200005, 1);
    for (int i = 2; i < 200005; ++i)
        fact[i] = (fact[i - 1] * i) % MOD;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        long long deletions = 0;
        long long ways = 1;
        int groups = 0;

        for (int i = 0; i < n;) {
            int j = i;
            while (j < n && s[j] == s[i]) j++;
            int len = j - i;
            deletions += (len - 1);
            ways = (ways * len) % MOD;
            groups++;
            i = j;
        }

        // Multiply by (groups-1)! as per formula
        ways = (ways * fact[groups - 1]) % MOD;
        cout << deletions << " " << ways << "\n";
    }
}
