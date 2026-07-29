#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    if (cin >> n) {
        vector<int> p(n + 1, 0);
        for (int i = 2; i <= n; i++) {
            if (p[i] == 0) {
                for (int j = 2 * i; j <= n; j += i) {
                    p[j]++;
                }
            }
        }
        int c = 0;
        for (int i = 1; i <= n; i++) {
            if (p[i] == 2) c++;
        }
        cout << c << "\n";
    }
    return 0;
}