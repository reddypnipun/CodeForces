#include <bits/stdc++.h>
using namespace std;
void f() {
    int n;
    if (!(cin >> n)) return;
    vector<int> x(n), d(n);
    for (int i = 0; i < n; i++) cin >> x[i] >> d[i];
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (x[i] + d[i] == x[j] && x[j] + d[j] == x[i]) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    f();
    return 0;
}