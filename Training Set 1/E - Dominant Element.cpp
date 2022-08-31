#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        map<int, int> count;
        int mostAppearances = 0;
        while (n-- > 0) {
            int x;
            cin >> x;
            count[x]++;
            mostAppearances = max(mostAppearances, count[x]);
        }
        int check = 0;
        for (auto it : count) {
            if (it.second == mostAppearances) {
                check++;
                if (check > 1) {
                    break;
                }
            }
        }
        if (check > 1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}