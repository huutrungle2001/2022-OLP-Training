#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> applicants(n);
    for (int &applicant : applicants) {
        cin >> applicant;
    }

    vector<int> apartments(m);
    for (int &apartment : apartments) {
        cin >> apartment;
    }

    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());

    int i = 0;
    int j = 0;
    int count = 0;
    
    while (i < n && j < m) {
        int diff = applicants[i] - apartments[j];
        if (abs(diff) <= k) {
            count++;
            i++;
            j++;
        } else {
            if (diff < k) {
                i++;
            } else {
                j++;
            }
        }
    }

    cout << count << endl;
}

int main() {
    solve();
}