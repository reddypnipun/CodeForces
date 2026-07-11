#include <bits/stdc++.h>
using namespace std;
void f() {
    int n, m, d;
    cin >> n >> m >> d;
    int h = d / m + 1;
    cout << (n + h - 1) / h << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        f();
    }
    return 0;
}