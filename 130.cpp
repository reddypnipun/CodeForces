#include <bits/stdc++.h>
using namespace std;
void s() {
    int n, k;
    cin >> n >> k;
    map<int, int> c;
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        c[v]++;
    }
    bool y = false;
    int p = -2e9; 
    for (auto const& [v, f] : c) {
        if (f % 2 == 0) {
            y = true;
            break;
        }
        if (p != -2e9 && v - p <= k) {
            y = true;
            break;
        }
        p = v; 
    }
    if (y) cout << "YES\n";
    else cout << "NO\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            s();
        }
    }
    return 0;
}