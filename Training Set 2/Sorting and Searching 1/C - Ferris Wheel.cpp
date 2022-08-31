#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, maxWeight;
    cin >> n >> maxWeight;

    vector<int> children(n);
    for (int &child : children) {
        cin >> child;
    }

    sort(children.begin(), children.end());

    int i = 0, j = n - 1, count = 0;

    while(i <= j){
        if(children[i] + children[j] <= maxWeight){
            i++;
            j--;
        }else {
            j--;
        }
        count++;
    }
    cout << count << "\n";
}

int main() {
    solve();
}