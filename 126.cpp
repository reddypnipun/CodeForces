#include <bits/stdc++.h>
using namespace std;
void s() {
    int n, k;
    cin >> n >> k;
    string w;
    cin >> w;
    vector<int> c(k, 0);
    for (int i = 0; i < n; i++) {
        if (w[i] == '1') {
            c[i % k]++;
        }
    }
    for (int i = 0; i < k; i++) {
        if (c[i] % 2 != 0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
