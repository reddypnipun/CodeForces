#include <bits/stdc++.h>
using namespace std;
void f() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int m = 0, c = 0;
    for (char x : s) {
        if (x == '#') {
            c++;
            if (c > m) m = c;
        } else {
            c = 0;
        }
    }
    cout << (m + 1) / 2 << "\n";
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