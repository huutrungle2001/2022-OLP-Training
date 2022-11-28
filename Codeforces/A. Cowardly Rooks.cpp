#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> rooks;
    vector<int> numRookInRow(n + 1);
    vector<int> numRookInCol(n + 1);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        rooks.push_back({x, y});
        numRookInRow[x]++;
        numRookInCol[y]++;
    }

    for (int i = 1; i <= n; i++) {
        if (numRookInRow[i] != 0) {
            continue;
        }
        for (int j = 1; j <= n; j++) {
            if (numRookInCol[j] == 0) {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}