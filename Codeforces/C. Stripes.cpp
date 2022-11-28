#include <bits/stdc++.h>
using namespace std;

void solve() {
    char grid[8][8];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < 8; i++) {
        int countR = 0, countB = 0;
        for (int j = 0; j < 8; j++) {
            if (grid[i][j] == 'R') {
                countR++;
            }
            if (grid[i][j] == 'B') {
                countB++;
            }
        }
        if (countR == 8) {
            cout << "R\n";
            return;
        }
        if (countB == 8) {
            cout << "B\n";
            return;
        }
    }

    for (int i = 0; i < 8; i++) {
        int countR = 0, countB = 0;
        for (int j = 0; j < 8; j++) {
            if (grid[j][i] == 'R') {
                countR++;
            }
            if (grid[j][i] == 'B') {
                countB++;
            }
        }
        if (countR == 8) {
            cout << "R\n";
            return;
        }
        if (countB == 8) {
            cout << "B\n";
            return;
        }
    }
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
    return 0;
}