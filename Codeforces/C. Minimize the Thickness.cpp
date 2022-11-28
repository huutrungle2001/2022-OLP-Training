#include <bits/stdc++.h>
using namespace std;

long long getThickness(vector<long long> nums, long long target) {
    long long sum = 0;
    long long count = 0;
    long long maxLength = 0;
    for (long long num : nums) {
        sum += num;
        count++;
        if (sum > target) {
            return -1;
        }
        if (sum == target) {
            maxLength = max(maxLength, count);
            count = 0;
            sum = 0;
        }
    }
    if (sum != 0) {
        return -1;
    }
    return maxLength;
}

void solve() {
    long long n;
    cin >> n;
    vector<long long> nums(n);
    vector<long long> prefixSum(n);
    long long sum = 0;
    for (long long i = 0; i < n; i++) {
        cin >> nums[i];
        sum += nums[i];
        prefixSum[i] = sum;
    }

    long long minThickness = n;

    for (long long i = 0; i < n; i++) {
        long long thickness = getThickness(nums, prefixSum[i]);
        minThickness = thickness != -1 ? min(minThickness, thickness) : minThickness;
    }

    cout << minThickness << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}