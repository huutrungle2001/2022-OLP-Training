#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, matrix[405][405];

// beauty = sum of elements on main diagonal - sum of elements on anti-diagonal
int getBeauty(int x, int y, int size) {
    int beauty = 0;
    for (int i = 0; i < size; i++) {
        beauty += matrix[x + i][y + i];
        beauty -= matrix[x + i][y + size - i - 1];
    }
    return beauty;
}

int getMaxBeauty(int size) {
    int maxBeauty = -1e18;
    for (int i = 0; i <= n - size; i++) {
        for (int j = 0; j <= n - size; j++) {
            maxBeauty = max(maxBeauty, getBeauty(i, j, size));
        }
    }
    return maxBeauty;
}

void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int maxBeauty = -1e18;
    for (int size = 1; size <= n; size++) {
        maxBeauty = max(maxBeauty, getMaxBeauty(size));
    }
    cout << maxBeauty << endl;
}

int32_t main() {
    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}