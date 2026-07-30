#include <bits/stdc++.h>
using namespace std;
void f() {
    int n, k;
    cin >> n >> k;
    if (k > n - 2) {
        cout << "-1\n";
        return;
    }
    int c0 = (n + 1) / 2, c1 = n / 2;
    int b = n - k;
    int b0 = (b + 1) / 2, b1 = b / 2;
    int i0 = 0, i1 = 0;
    for (int i = 0; i < b; i++) {
        if (i % 2 == 0) {
            int len = 1 + (i0 == 0 ? c0 - b0 : 0);
            cout << string(len, '0');
            i0++;
        } else {
            int len = 1 + (i1 == 0 ? c1 - b1 : 0);
            cout << string(len, '1');
            i1++;
        }
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