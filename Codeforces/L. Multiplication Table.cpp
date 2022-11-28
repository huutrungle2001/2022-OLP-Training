#include <bits/stdc++.h>
using namespace std;

void solve() {
    int row, col;
    cin >> row >> col;

    vector<vector<int>> table(row, vector<int>(col));
    vector<int> countNum(row, 0);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            string s;
            cin >> s;
            if(s == "?") {
                table[i][j] = -1;
            }else{
                table[i][j] = stoi(s);
                countNum[i]++;
            }
        }
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
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