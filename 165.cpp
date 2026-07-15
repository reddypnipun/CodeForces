#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    if (cin >> n) {
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int md = 2000;
        int i1 = 0, i2 = 0;
        for (int i = 0; i < n; i++) {
            int j = (i + 1) % n;
            int d = abs(a[i] - a[j]);
            if (d < md) {
                md = d;
                i1 = i + 1;
                i2 = j + 1;
            }
        }
        cout << i1 << " " << i2 << "\n";
    }
    return 0;
}