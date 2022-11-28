#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int commonGCD = nums[0];

    for (int i = 1; i < n; i++) {
        commonGCD = __gcd(commonGCD, nums[i]);
    }

    if(commonGCD != 1) {
        cout << -1 << endl;
        return;
    }

    int maxIndexSum = -1;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = i; j >= 0 && (i + j > maxIndexSum); j--) {
            if (__gcd(nums[i], nums[j]) == 1) {
                maxIndexSum = max(maxIndexSum, i + j);
            }
        }
    }
    maxIndexSum = maxIndexSum == -1 ? -1 : maxIndexSum + 2;
    cout << maxIndexSum << endl;
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
}