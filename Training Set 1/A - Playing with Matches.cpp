#include <bits/stdc++.h>
using namespace std;

int numMatches[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int countMatches(int n) {
    int count = 0;
    while (n > 0) {
        count += numMatches[n % 10];
        n /= 10;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t-->0) {
        int a, b;
        cin >> a >> b;
        cout << countMatches(a + b) << "\n";
    }
}