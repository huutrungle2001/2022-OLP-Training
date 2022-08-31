#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    int minNum = INT_MAX, maxNum = INT_MIN;
    for (int &num : nums) {
        cin >> num;
        minNum = min(minNum, num);
        maxNum = max(maxNum, num);
    }

    if (n == 1) {
        cout << "YES\n";
        return;
    }

    if (minNum + maxNum > k) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}