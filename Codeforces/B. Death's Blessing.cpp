#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    long long sumHealthAndDamage = 0;
    long long maxDamage = 0;

    for (int i = 0; i < n; i++) {
        long long health;
        cin >> health;
        sumHealthAndDamage += health;
    }

    for (int i = 0; i < n; i++) {
        long long damage;
        cin >> damage;
        sumHealthAndDamage += damage;
        maxDamage = max(maxDamage, damage);
    }

    cout << sumHealthAndDamage - maxDamage << endl;
}

int main() {
    // freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}