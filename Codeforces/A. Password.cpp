#include <iostream>
using namespace std;

int nC2(int n) {
    return n * (n - 1) / 2;
}

void solve() {
    int n;
    cin >> n;
    cout << 6 * nC2(10 - n) << endl;
    while (n-- > 0) {
        int x;
        cin >> x;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}