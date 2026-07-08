#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    if (!(cin >> n >> m)) return 0;
    vector<string> g(n);
    for (int i = 0; i < n; ++i) {
        cin >> g[i];
    }
    for (int i = 0; i < n; ++i) {
        char c = g[i][0];
        for (int j = 1; j < m; ++j) {
            if (g[i][j] != c) {
                cout << "NO\n";
                return 0;
            }
        }
        if (i < n - 1 && c == g[i + 1][0]) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
