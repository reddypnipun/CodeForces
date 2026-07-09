#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    int m1 = 200;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < m1) m1 = a[i];
    }
    int m2 = 200;
    for (int i = 0; i < n; i++) {
        if (a[i] > m1 && a[i] < m2) m2 = a[i];
    }
    if (m2 == 200) cout << "NO\n";
    else cout << m2 << "\n";
    return 0;
}