#include <bits/stdc++.h>
using namespace std;

void solve() {
    double Chef_floor, Chefina_floor, Chef_speed, Chefina_speed;
    cin >> Chef_floor >> Chefina_floor >> Chef_speed >> Chefina_speed;
    double Chef_time = Chef_floor / Chef_speed;
    double Chefina_time = Chefina_floor / Chefina_speed;

    if (Chef_time < Chefina_time) {
        cout << "Chef\n";
    } else if (Chef_time > Chefina_time) {
        cout << "Chefina\n";
    } else {
        cout << "Both\n";
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