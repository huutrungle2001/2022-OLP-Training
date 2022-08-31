#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        set<int> distinct;
        int n;
        cin >> n;
        while (n-- > 0) {
            int x;
            cin >> x;
            if (x > 0) {
                distinct.insert(x);
            }
        }
        cout << distinct.size() << "\n";
    }
}