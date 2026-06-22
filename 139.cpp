#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    if (!(cin >> n >> q)) return 0;
    vector<int> c(n), s(n);
    for (int i = 0; i < n; ++i) {
        cin >> c[i] >> s[i];
    }
    vector<int> next_diff(n, -1);
    for (int i = n - 2; i >= 0; --i) {
        if (s[i] != s[i + 1]) {
            next_diff[i] = i + 1;
        } else {
            next_diff[i] = next_diff[i + 1];
        }
    }
    for (int i = 0; i < q; ++i) {
        int d, o;
        cin >> d >> o;
        auto it = lower_bound(c.begin(), c.end(), d, greater<int>());
        if (it == c.end()) {
            cout << -1 << "\n";
        } else {
            int pos = distance(c.begin(), it);
            if (s[pos] != o) {
                cout << pos + 1 << "\n";
            } else {
                int next_p = next_diff[pos];
                if (next_p == -1) {
                    cout << -1 << "\n";
                } else {
                    cout << next_p + 1 << "\n";
                }
            }
        }
    }
    return 0;
}