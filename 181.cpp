#include <bits/stdc++.h>
using namespace std;

void f() {
    long long n, k, m;
    cin >> n >> k >> m;
    if (k > m) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for (int i = 1; i <= n; i++) {
        if (i == k) cout << m - k + 1 << " ";
        else cout << 1 << " ";
    }
    cout << "\n";
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