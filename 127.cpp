#include <bits/stdc++.h>
using namespace std;
void s() {
    int a, b, x;
    cin >> a >> b >> x;
    vector<int> c, d;
    while (true) {
        c.push_back(a);
        if (a == 0) break;
        a /= x;
    }
    while (true) {
        d.push_back(b);
        if (b == 0) break;
        b /= x;
    }
    int m = 2e9;
    for (int i = 0; i < c.size(); i++) {
        for (int j = 0; j < d.size(); j++) {
            m = min(m, i + j + abs(c[i] - d[j]));
        }
    }
    cout << m << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            s();
        }
    }
    return 0;
}
