#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> count;
    int temp;
    int maxCount = 0;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        count[temp]++;
        maxCount = max(maxCount, count[temp]);
    }
    cout << n - maxCount << "\n";
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