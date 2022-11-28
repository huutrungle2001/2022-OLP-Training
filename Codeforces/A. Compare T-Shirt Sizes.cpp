#include <bits/stdc++.h>
using namespace std;

bool compareSize(char a, char b) {
    if (a == 'S' && b == 'M') return true;
    if (a == 'M' && b == 'L') return true;
    if (a == 'S' && b == 'L') return true;
    return false;
}

void solve() {
    string a, b;
    cin >> a >> b;
    char sizeA = a.back();
    char sizeB = b.back();

    if (sizeA == sizeB) {
        if (sizeA == 'L') {
            if (a.length() > b.length()) {
                cout << ">" << endl;
            } else if (a.length() < b.length()) {
                cout << "<" << endl;
            } else {
                cout << "=" << endl;
            }
        } else if (sizeA == 'M') {
            cout << "=" << endl;
        }else{
            if (a.length() > b.length()) {
                cout << "<" << endl;
            } else if (a.length() < b.length()) {
                cout << ">" << endl;
            } else {
                cout << "=" << endl;
            }
        }
        return;
    } else {
        if (compareSize(sizeA, sizeB)) {
            cout << "<" << endl;
        } else {
            cout << ">" << endl;
        }
    }
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