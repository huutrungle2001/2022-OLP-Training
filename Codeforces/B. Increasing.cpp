#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> count;
    bool flag = false;
    while (n-- > 0) {
        int x;
        cin >> x;
        count[x]++;
        if (count[x] > 1) {
            flag = true;
        }
    }

    if (flag) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
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