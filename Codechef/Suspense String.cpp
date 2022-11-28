    #include <bits/stdc++.h>
    using namespace std;

    static inline void solve() {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string res = "";
        bool AliceTurn = true;
        while (s.length() != 0) {
            if (AliceTurn) {
                char c = s.front();
                s.erase(s.begin());
                if (c == '0') {
                    res = c + res;
                } else {
                    res = res + c;
                }
            } else {
                char c = s.back();
                s.pop_back();
                if (c == '0') {
                    res = res + c;
                } else {
                    res = c + res;
                }
            }
            AliceTurn = !AliceTurn;
        }
        cout << res << "\n";
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