#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    set<int> distincts;
    while(n-->0){
        int temp;
        cin >> temp;
        distincts.insert(temp);
    }
    cout << distincts.size() << "\n";
}

int main() {
    solve();
}