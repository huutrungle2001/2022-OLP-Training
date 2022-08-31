#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int &num : nums) {
            cin >> num;
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] <= 7) {
                count++;
                if (count == 7) {
                    cout << i + 1 << "\n";
                    break;
                }
            }
        }
    }
}