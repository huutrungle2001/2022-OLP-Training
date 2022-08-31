#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    vector<bool> checkRow(n);
    vector<bool> checkCol(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                checkRow[i] = true;
            }
            if (matrix[j][i] == 0) {
                checkCol[i] = true;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (!checkRow[i] || !checkCol[i]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}