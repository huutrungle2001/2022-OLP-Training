#include <bits/stdc++.h>
using namespace std;

int countOperation(vector<int> permutation, int left, int right, int minVal, int maxVal) {
    for (int i = left; i <= right; i++) {
        if (permutation[i] < minVal || permutation[i] > maxVal) {
            return -1;
        }
    }
    if (left == right) {
        return !(permutation[left] == minVal);
    }
    int mid = (left + right) / 2;
    int midVal = (minVal + maxVal) / 2;
    if (permutation[left] >= minVal && permutation[left] <= midVal) {
        int leftCount = countOperation(permutation, left, mid, minVal, midVal);
        int rightCount = countOperation(permutation, mid + 1, right, midVal + 1, maxVal);
        if (leftCount == -1 || rightCount == -1) {
            return -1;
        } else {
            return leftCount + rightCount;
        }
    } else {
        int leftCount = countOperation(permutation, left, mid, midVal + 1, maxVal);
        int rightCount = countOperation(permutation, mid + 1, right, minVal, midVal);
        if (leftCount == -1 || rightCount == -1) {
            return -1;
        } else {
            return leftCount + rightCount + 1;
        }
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> permutation(n);
    for (int i = 0; i < n; i++) {
        cin >> permutation[i];
    }
    cout << countOperation(permutation, 0, n - 1, 1, n) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}