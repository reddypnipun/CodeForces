#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long n, k;
    cin >> n >> k;
    long long ans = 0;
    long long p = 1;
        while (p <= n) {
        long long take = min(k, n / p);
        ans += take;
        n -= take * p;
        p *= 2;     
        }
    cout << ans << "\n";
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