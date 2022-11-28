#include <bits/stdc++.h>
using namespace std;

static inline bool isVowel(const char &c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

static inline bool isHappy(const string &s) {
    for (int i = 0; i < s.length() - 2; i++) {
        if (isVowel(s[i]) && isVowel(s[i + 1]) && isVowel(s[i + 2])) {
            return true;
        }
    }
    return false;
}

static inline void solve() {
    string s;
    cin >> s;
    string answer = isHappy(s) ? "Happy" : "Sad";
    cout << answer << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
}