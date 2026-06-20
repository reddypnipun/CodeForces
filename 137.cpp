#include <iostream>
#include <algorithm>
using namespace std;
void solve() {
    long long n, a, b;
    cin >> n >> a >> b;
    long long c1 = n * a;
    long long c2 = ((n + 2) / 3) * b;
    long long c3 = (n / 3) * b + (n % 3) * a;
    cout << min({c1, c2, c3}) << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    if (cin >> t) {
        while (t--) solve();
    }
    return 0;
}