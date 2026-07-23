#include <bits/stdc++.h>
using namespace std;
void f() {
    long long n, c, s = 0;
    cin >> n >> c;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i] - c;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n / 2; i++) {
        if (a[i] < c) s += c - a[i];
        else break;
    }
    cout << s << "\n";
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