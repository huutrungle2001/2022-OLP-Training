#include <bits/stdc++.h>
using namespace std;
#define int long long

struct Guard {
    int start;
    int end;
    int cost;
};

signed main() {
    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<Guard> guards(m);
    for (int i = 0; i < m; i++) {
        cin >> guards[i].start >> guards[i].end >> guards[i].cost;
    }
    sort(guards.begin(), guards.end(), [](const Guard &a, const Guard &b) {
        return a.start < b.start;
    });
    
    vector<int> dp(m + 1);
    for (int i = 1; i <= m; i++) {
        dp[i] = dp[i - 1];
        int j = i - 1;
        while (j >= 0 && guards[j].start >= guards[i - 1].end) {
            dp[i] = min(dp[i], dp[j] + guards[i - 1].cost);
            j--;
        }
    }
    cout << dp[m];
}