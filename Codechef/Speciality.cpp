#include <bits/stdc++.h>
using namespace std;

static inline void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int maxProb = max(a, max(b, c));
    string answer = maxProb == a ? "Setter" : (maxProb == b ? "Tester" : "Editorialist");
    cout << answer << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}