#include <bits/stdc++.h>
using namespace std;

void solve() {
    int friends, slices;
    cin >> friends >> slices;
    cout << ceil(double(friends * slices) / 4.0) << "\n";
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