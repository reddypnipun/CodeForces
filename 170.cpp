#include <bits/stdc++.h>
using namespace std;
void f() {
    int n, k;
    cin >> n >> k;
    int s = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s += x;
    }
    if (s % 2 != 0 || n % 2 == 0 || k % 2 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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