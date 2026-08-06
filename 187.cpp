#include <bits/stdc++.h>
using namespace std;
void f() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    while (a != b && b != c && a != c) {
        if (a > b && a > c) {
            if (b < c) { a--; b++; }
            else { a--; c++; }
        } else if (b > a && b > c) {
            if (a < c) { b--; a++; }
            else { b--; c++; }
        } else {
            if (a < b) { c--; a++; }
            else { c--; b++; }
        }
        ans++;
    }
    cout << ans << "\n";
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