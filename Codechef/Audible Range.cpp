#include <bits/stdc++.h>
using namespace std;

static inline void solve() {
    int frequency;
    cin >> frequency;
    string answer = frequency >= 67 && frequency <= 45000 ? "YES" : "NO";
    cout << answer << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}