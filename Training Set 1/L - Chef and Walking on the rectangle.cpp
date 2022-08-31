#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, m, k;
        cin >> n >> m >> k;
        if (n * m <= 2) {
            cout << "0\n";
        } else if (n == 1 || m == 1) {
            cout << k << "\n";
        } else if (k % 2) {
            cout << k / 2 + 1 << "\n";
        } else {
            cout << k / 2 << "\n";
        }
    }
}