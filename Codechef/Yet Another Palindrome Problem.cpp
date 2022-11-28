#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int &num : nums) {
        cin >> num;
    }
    int prev = 0;
    int curr = 0;
    int i = 0;
    int j = n - 1;
    curr = nums[j] - nums[i];
    prev = curr;

    while (i < j) {
        curr = nums[j] - nums[i];
        if (curr > prev || curr < 0) {
            cout << "-1" << endl;
            return;
        }
        prev = curr;
        i++;
        j--;
    }

    cout << nums.back() - nums.front() << "\n";
}

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}