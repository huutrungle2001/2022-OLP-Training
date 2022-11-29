#include <bits/stdc++.h>
using namespace std;
#define int long long

int countInverse(vector<int> &numbers, int l, int r) {
    int count = 0;

    for (int i = l; i < r; i++) {
        for (int j = i + 1; j <= r; j++) {
            if (numbers[i] > numbers[j]) {
                count++;
            }
        }
    }

    return count;
}

signed main() {
    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> numbers(n);
    for (int &number : numbers) {
        cin >> number;
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << countInverse(numbers, l - 1, r - 1) << endl;
    }
}