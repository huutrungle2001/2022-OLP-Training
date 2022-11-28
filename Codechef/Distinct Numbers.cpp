#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    set<int> nums;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.insert(num);
    }

    int score = 0;

    int i = 1;

    if (k == 1) {
        while (nums.find(i) != nums.end()) {
            i++;
        }
        nums.insert(i);
        score += *nums.rbegin() - i;
    } else {
        // k = 2
        // 3 4 5 6
        // 
        if (nums.find(2 * n) == nums.end()) {
            nums.insert(2 * n);
            k--;
        }
        while (k > 0) {
            while (nums.find(i) != nums.end()) {
                i++;
            }
            nums.insert(i);
            score += *nums.rbegin() - i;
            k--;
        }
    }

    cout << score << endl;
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