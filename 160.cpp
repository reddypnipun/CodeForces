#include <bits/stdc++.h>
using namespace std;
void f() {
    int n;
    cin >> n;
    vector<int> a(n);
    int s = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    set<int> w;
    for (int i = 0; i < n; i++) {
        vector<int> b = a;
        int r = s;
        int c = i;
        int l = -1;
        while (r > 0) {
            if (b[c] > 0) {
                b[c]--;
                r--;
                if (r == 0) l = c;
            }
            c = (c + 1) % n;
        }
        w.insert(l);
    }
    cout << w.size() << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        f();
    }
    return 0;
}