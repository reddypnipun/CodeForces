#include <bits/stdc++.h>
using namespace std;
void f() {
    int n;
    cin >> n;
    vector<int> a(n);
    bool s = true;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 0 && a[i] < a[i - 1]) {
            s = false;
        }
    }
    if (s) cout << n << "\n";
    else cout << "1\n";
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