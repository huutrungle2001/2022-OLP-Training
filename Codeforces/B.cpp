#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> d(n + 1);
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> d[i];
    }

    a[1] = d[1];

    for (int i = 2; i <= n; i++) {
        if (a[i - 1] - d[i] > 0 && d[i] != 0) {
            cout << "-1\n";
            return;
        }
        a[i] = a[i - 1] + d[i];
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

// -d[i] = a[i] - a[i - 1] -> a[i] = a[i - 1] - d[i];
// d[i] = a[i] - a[i - 1]  -> a[i] = a[i - 1] + d[i]