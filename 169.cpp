#include <bits/stdc++.h>
using namespace std;
void f() {
    int k;
    cin >> k;
    int c2 = 0;
    bool c3 = false;
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        if (x >= 3) c3 = true;
        if (x >= 2) c2++;
    }
    if (c3 || c2 >= 2) cout << "YES\n";
    else cout << "NO\n";
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