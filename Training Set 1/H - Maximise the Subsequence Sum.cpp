#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        int sum = 0;
        int count = 0;
        for (int &num : nums) {
            cin >> num;
            if (num >= 0) {
                sum += num;
                count++;
            }
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - count && i < k; i++) {
            sum += (-nums[i]);
        }
        cout << sum << endl;
    }
}