#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isPalindrome(string s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

signed main() {
    // freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int length = n - k;
    string s;
    cin >> s;
    for(int i = 0; i < n - k; i++) {
        string temp = s.substr(i, length);
        if(isPalindrome(temp)) {
            cout << temp << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}