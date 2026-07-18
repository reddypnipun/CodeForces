#include <bits/stdc++.h>
using namespace std;
void f() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (2 * k > n) {
        cout << "-1\n";
        return;
    }
    int c = 0;
    for (int i = 0; i < k; i++) {
        if (s[i] == 'L') c++;
    }
    for (int i = n - k; i < n; i++) {
        if (s[i] == 'R') c++;
    }
    cout << c << "\n";
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