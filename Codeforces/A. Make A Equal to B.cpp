#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    int countA1 = 0;
    int countB1 = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            countA1++;
        }
    }

    int countDiff = 0;

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (b[i] == 1) {
            countB1++;
        }
        if (a[i] != b[i]) {
            countDiff++;
        }
    }

    
    if (countDiff == 0) {
        cout << 0 << endl;
    } else if (countDiff > abs(countA1 - countB1)) {
        cout << abs(countA1 - countB1) + 1 << endl;
    } else if (countDiff == abs(countA1 - countB1)) {
        cout << countDiff << endl;
    } else if (countA1 == countB1) {
        cout << 1 << endl;
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