#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    char c;
    if (cin >> n >> m >> c) {
        vector<string> g(n);
        for (int i = 0; i < n; i++) cin >> g[i];
        set<char> s;
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (g[i][j] == c) {
                    for (int k = 0; k < 4; k++) {
                        int ni = i + dx[k];
                        int nj = j + dy[k];
                        if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                            char x = g[ni][nj];
                            if (x != '.' && x != c) s.insert(x);
                        }
                    }
                }
            }
        }
        cout << s.size() << "\n";
    }
    return 0;
}