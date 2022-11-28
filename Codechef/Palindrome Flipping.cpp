#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s.length() % 2) {
        cout << "YES"
             << "\n";
        return;
    }
    int count0 = 0;
    int count1 = 0;
    for (char c : s) {
        if (c == '0') {
            count0++;
        } else {
            count1++;
        }
    }
    if (!(count0 % 2) && !(count1 % 2)) {
        cout << "YES"
             << "\n";
        return;
    }
    cout << "NO\n";
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