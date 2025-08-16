#include <bits/stdc++.h>
using namespace std;

vector<int> findMajority(vector<int>& arr) {
    int n = arr.size();
    unordered_map<int, int> freq;
    vector<int> ans;

    for (int num : arr) {
        freq[num]++;
    }

    int majority = n / 3;
    for (auto &p : freq) {
        if (p.second > majority) {
            ans.push_back(p.first);
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1,2,3,1,1,2,2,2};
    vector<int> result = findMajority(arr);

    for (int num : result) cout << num << " ";
    cout << "\n";
    return 0;
}
