#include <bits/stdc++.h>
using namespace std;

void solve() {
    float X, Y;
    cin >> X >> Y;
    if (Y >= (X / 2)) {
        cout << "YES"
             << "\n";
    } else {
        cout << "NO"
             << "\n";
    }
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