#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<string> s(3);
    if (cin >> s[0] >> s[1] >> s[2]) {
        bool f = true;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (s[i][j] != s[2 - i][2 - j]) f = false;
            }
        }
        if (f) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
