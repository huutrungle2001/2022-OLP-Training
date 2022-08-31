#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        map<int, int> count;
        int n;
        cin >> n;
        while (n-- > 0) {
            int x;
            cin >> x;
            count[x]++;
            if (count[x] == 2) {
                count.erase(x);
            }
        }
        cout << count.begin()->first << "\n";
    }
}