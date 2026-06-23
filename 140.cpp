#include <iostream>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin >> n;
    long long s = 0, p = 0, o = 0, g = 0;
    for (int i = 0; i < n; i++) {
        long long c;
        cin >> c;
        if (c == 1) {
            o++;
        } else {
            g++;
            s += c;
            p += c / 2;
        }
    }
    long long k = (g == 1) ? p : (p - g);
    long long a = s + min(o, k);
    if (a >= 3) {
        cout << a << "\n";
    } else {
        cout << 0 << "\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int multTestQ;
    if (cin >> multTestQ) {
        while (multTestQ--) {
            solve();
        }
    }
    return 0;
}