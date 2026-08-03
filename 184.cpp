#include <bits/stdc++.h>
using namespace std;
void f() {
    int n, c;
    cin >> n >> c;
    vector<int> a(n), b(n);
    long long sa = 0, sb = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sa += a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        sb += b[i];
    }
    bool ok1 = true;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            ok1 = false;
            break;
        }
    }
    if (ok1) {
        cout << sa - sb << "\n";
        return;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    bool ok2 = true;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            ok2 = false;
            break;
        }
    }
    if (ok2) cout << sa - sb + c << "\n";
    else cout << -1 << "\n";
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