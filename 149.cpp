#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    int pos_n = 0;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        if (p[i] == n) {
            pos_n = i;
        }
    }
    swap(p[0], p[pos_n]);
    for (int i = 0; i < n; i++) {
        cout << p[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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