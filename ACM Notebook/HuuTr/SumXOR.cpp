#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    for (int i = 0; i < 30; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] & (1 << i)) cnt++;
        }
        ans += (1 << i) * cnt * (n - cnt);
    }

    cout << ans << endl;
}

int32_t main() {
    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}