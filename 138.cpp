#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    if (m > n) {
        cout << "YES\n";
        return;
    }
    int cnt = 1, max_cnt = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) cnt++;
        else cnt = 1;
        max_cnt = max(max_cnt, cnt);
    }
    if (max_cnt >= m) cout << "NO\n";
    else cout << "YES\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    if (cin >> t) {
        while (t--) solve();
    }
    return 0;
}