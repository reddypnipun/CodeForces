#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b;
    if (cin >> n >> a >> b) {
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                char p = (i > 0) ? s[i - 1] : '*';
                if (p == 'A') {
                    if (b > 0) { s[i] = 'B'; b--; c++; }
                } else if (p == 'B') {
                    if (a > 0) { s[i] = 'A'; a--; c++; }
                } else {
                    if (a >= b && a > 0) { s[i] = 'A'; a--; c++; }
                    else if (b > a && b > 0) { s[i] = 'B'; b--; c++; }
                }
            }
        }
        cout << c << "\n";
    }
    return 0;
}