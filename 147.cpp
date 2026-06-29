#include <bits/stdc++.h>
using namespace std;
bool s[1000005], q[1000005];
void solve() {
    int n, l;
    cin >> n;
    vector<vector<int>> b(n);
    for (int i = 0; i < n; i++) {
        cin >> l;
        vector<int> v(l);
        for (int j = 0; j < l; j++) cin >> v[j];
        for (int j = l - 1; j >= 0; j--) {
            if (!s[v[j]]) {
                b[i].push_back(v[j]);
                s[v[j]] = true;
            }
        }
        for (int x : b[i]) s[x] = false;
    }
    vector<int> ans;
    vector<bool> u(n, false);
    for (int step = 0; step < n; step++) {
        int bi = -1;
        vector<int> bf;
        for (int i = 0; i < n; i++) {
            if (u[i]) continue;
            vector<int> f;
            for (int x : b[i]) {
                if (!q[x]) f.push_back(x);
            }
            if (bi == -1 || f < bf) {
                bi = i;
                bf = f;
            }
        }
        u[bi] = true;
        for (int x : bf) {
            ans.push_back(x);
            q[x] = true;
        }
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << (i + 1 == ans.size() ? "" : " ");
        q[ans[i]] = false;
    }
    cout << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    if (cin >> t) while (t--) solve();
    return 0;
}