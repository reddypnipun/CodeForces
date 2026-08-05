#include <bits/stdc++.h>
using namespace std;
void f() {
    int n, p1, p2, p3, t1, t2;
    if (!(cin >> n >> p1 >> p2 >> p3 >> t1 >> t2)) return;
    vector<pair<int, int>> a(n);
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
        ans += (a[i].second - a[i].first) * p1;
    }
    for (int i = 0; i < n - 1; i++) {
        int dt = a[i + 1].first - a[i].second;
        int m1 = min(dt, t1);
        ans += m1 * p1;
        dt -= m1;
        int m2 = min(dt, t2);
        ans += m2 * p2;
        dt -= m2;
        ans += dt * p3;
    }
    cout << ans << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    f();
    return 0;
}
