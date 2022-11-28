#include <bits/stdc++.h>
using namespace std;

void solve() {
    int tax;
    cin >> tax;
    tax = tax > 100 ? tax - 10 : tax;
    cout << tax << "\n";
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