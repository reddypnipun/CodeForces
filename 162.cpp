#include <bits/stdc++.h>
using namespace std;
void f() {
    long long x;
    cin >> x;
    int c = 0;
    for (long long y = x; y <= x + 100; y++) {
        long long t = y, s = 0;
        while (t) {
            s += t % 10;
            t /= 10;
        }
        if (y - s == x) c++;
    }
    cout << c << "\n";
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