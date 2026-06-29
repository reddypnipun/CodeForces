#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    int c = 0;
    for (int i = 0; i < n - 1; i++) {
        int d = abs(p[i] - p[i+1]);
        if (p[i] % d == 0) c++;
    }
    cout << c << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    if (cin >> t) while (t--) solve();
    return 0;
}