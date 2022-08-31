#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        map<int, int> count;
        int mostAppearances = -1;
        int n;
        cin >> n;
        int answer = n;
        while (n-- > 0) {
            int x;
            cin >> x;
            count[x]++;
            mostAppearances = max(mostAppearances, count[x]);
        }
        answer -= mostAppearances;
        cout << answer << "\n";
    }
}