#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<int>> adj;
vector<int> visited;

void dfs(int u) {
    visited[u] += 1;
    for (int v : adj[u]) {
        if (visited[v] < 2) {
            dfs(v);
        }
    }
}

// 1: 3,2
// 2: x
// 3: 4
// 4: x 
// 5: 4 ,2

// visited = [0, 0, 0, 0, 0, 0]
// dfs(1) -> visited[1] -> dfs(3) -> visited[3] -> dfs(4) -> visited[4] -> return
// -> dfs(2) -> visited[2] -> return
// visited = [0, 1, 1, 1, 1, 0]

// 2 1
// 1 2

// 1: 2
// 2: 1
// visited = [0, 0, 0]
// dfs(1) -> visited[1] -> dfs(2) -> visited[2] -> return

void solve() {
    int n, m;
    cin >> n >> m;

    adj = vector<vector<int>>(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[v].push_back(u);
    }

    visited = vector<int>(n + 1, 0);
    dfs(1);

    cout << (visited[1] > 1);
    for (int i = 2; i <= n; i++) {
        cout << (visited[i] > 0);
    }

    cout << endl;
}

int32_t main() {
    // freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}