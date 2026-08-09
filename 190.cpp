#include <bits/stdc++.h>
using namespace std;
void f() {
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        long long v = n / i;
        ans += v * v;
    }
    cout << ans << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    if (cin >> t) {
        while (t--) f();
    }
    return 0;
}
