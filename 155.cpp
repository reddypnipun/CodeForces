#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, x = 0, y = 0, m = 1e9, f = 0;
        cin >> n;
        vector<int> a(n), s1(n), s2(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 1) {
                x++;
                y++;
            } else if (a[i] == 2) {
                x--;
                y++;
            } else {
                x--;
                y--;
            }
            s1[i] = x;
            s2[i] = y;
        }
        for (int i = 1; i < n - 1; i++) {
            if (s1[i - 1] >= 0 && s2[i - 1] < m) {
                m = s2[i - 1];
            }
            if (s2[i] >= m) {
                f = 1;
                break;
            }
        }
        if (f) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}