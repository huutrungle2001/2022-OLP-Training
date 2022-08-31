#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n;
    cin >> n;
    for (int i = 2; i <= 2 * n; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}