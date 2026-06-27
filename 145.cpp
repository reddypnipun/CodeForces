#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) {
            res = (res * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

void solve() {
    long long n, m, r, c;
    cin >> n >> m >> r >> c;
    long long total_vars = n * m;
    long long equations = (n - r + 1) * (m - c + 1);
    
    long long free_vars = total_vars - equations;
    cout << power(2, free_vars) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}