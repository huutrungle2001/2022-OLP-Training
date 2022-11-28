#include <bits/stdc++.h>
using namespace std;
#define int long long

struct Node {
    int val;
    int parent;
    int lazy;
    vector<int> child;

    Node(int val = 0, int parent = 0) {
        this->val = val;
        this->parent = parent;
        this->lazy = 0;
    }
};

Node tree[1000000];

// Add x to all child nodes of a
void add(int a, int x) {
    tree[a].lazy += x;
}

void unlayzy(int a) {
    if (tree[a].lazy != 0) {
        unlayzy(tree[a].parent);
        for(int child : tree[a].child) {
            tree[child].val += tree[a].lazy;
            add(child, tree[a].lazy);
        }
        tree[a].lazy = 0;
    }
}

int query(int a) {
    return tree[a].val;
}

void solve() {
    int n, m;
    cin >> n >> m;
    int value, parent;
    cin >> value;
    tree[1] = Node(value);
    for (int i = 2; i <= n; i++) {
        cin >> value >> parent;
        tree[i] = Node(value, parent);
        tree[parent].child.push_back(i);
    }

    for (int i = 0; i < m; i++) {
        char operation;
        cin >> operation;
        if (operation == 'p') {
            int a, x;
            cin >> a >> x;
            // Add x to all child nodes of a
            add(a, x);
        } else {
            int a;
            cin >> a;
            // Print value of a
            cout << query(a) << endl;
        }
    }
}

int32_t main() {
    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}