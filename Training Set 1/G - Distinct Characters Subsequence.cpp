#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        string s;
        cin >> s;
        vector<bool> check(30, true);
        int count = 0;
        for (char c : s) {
            if (check[c - 'a']) {
                count++;
                check[c - 'a'] = false;
            }
        }
        cout << count << endl;
    }
}
